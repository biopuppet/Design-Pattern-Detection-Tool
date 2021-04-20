#include <iostream>

#include "graph.hpp"
#include "pattern_analyzer.hpp"
// #include <boost/algorithm/string/predicate.hpp>

const PatternMap PatternAnalyzer::pattern_map = {
#define PATTERN(x, c) {#x, PatternType::PT_##x},
#include "pattern.def"
};

PatternAnalyzer *
PatternAnalyzer::createPatternAnalyzer(const SubPatternDetector &spd,
                                       const std::string &p) {
    if (p.empty()) {
        return new AllAnalyzer(spd);
    }
    if (!pattern_map.count(p)) {
        std::cerr << "Unknown pattern name " << p << std::endl;
        return nullptr;
    }
    auto pt = pattern_map.at(p);
    switch (pt) {
#define PATTERN(X, C) \
    case PT_##X:      \
        return new C##Analyzer(spd);
#include "pattern.def"
    default:
        break;
    }
    return nullptr;
}

void ProxyAnalyzer::struct_analyze() {
    for (const auto &ica : spis[SPT_ICA]) {
        for (const auto &ci : spis[SPT_CI]) {
            if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
                add_pattern(new Proxy(sys[ci[0]], sys[ci[1]], sys[ci[2]],
                                      Proxy::RefRealSubject));
            }
        }
    }

    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &iass : spis[SPT_IASS]) {
            if (ci[0] == iass[0] && ci[2] == iass[1]) {
                add_pattern(new Proxy(sys[ci[0]], sys[ci[1]], sys[ci[2]],
                                      Proxy::RefSubject));
            }
        }
    }
}

void AdapterAnalyzer::struct_analyze() {
    for (const auto &ica : spis[SPT_ICA]) {
        // CI && ICA, same as Proxy
        if (!sys.hasInheritance(ica[2], ica[0])) {
            add_pattern(new Adapter(sys[ica[0]], sys[ica[1]], sys[ica[2]]));
        }
    }
}

void CompositeAnalyzer::struct_analyze() {
    for (const auto &ci : spis[SPT_CI]) {
        if (sys.hasAssOrAgg(ci[2], ci[0])) {
            add_pattern(new Composite(sys[ci[0]], sys[ci[1]], sys[ci[2]]));
        }
    }
}

void DecoratorAnalyzer::struct_analyze() {
    for (const auto &mli : spis[SPT_MLI]) {
        for (const auto &ci : spis[SPT_CI]) {
            if (mli[0] == ci[0] && mli[1] == ci[2] && mli[2] != ci[1] &&
                sys.hasAssOrAgg(ci[2], ci[0])) {
                add_pattern(new Decorator(sys[mli[0]], sys[ci[1]], sys[ci[2]],
                                          sys[mli[2]]));
            }
        }
    }
}

void BridgeAnalyzer::struct_analyze() {
    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &ipag : spis[SPT_IPAG]) {
            if (ipag[2] == ci[0] && ipag[1] != ci[2] && ipag[2] != ci[1] &&
                ci[1] != ipag[1] && ci[2] != ipag[2]) {
                add_pattern(new Bridge(sys[ipag[0]], sys[ipag[1]], sys[ipag[2]],
                                       sys[ci[1]], sys[ci[2]]));
            }
        }
    }
}

void FlyweightAnalyzer::struct_analyze() {
    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &agpi : spis[SPT_AGPI]) {
            if (agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
                add_pattern(new Flyweight(sys[agpi[2]], sys[ci[0]], sys[ci[1]],
                                          sys[ci[2]]));
            }
        }
    }
}

// TODO: Facade implementation undetermined
void FacadeAnalyzer::struct_analyze() {
    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &agpi : spis[SPT_AGPI]) {
            if (agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
                add_pattern(new Facade(sys[agpi[2]], sys[ci[0]], sys[ci[1]],
                                       sys[ci[2]]));
            }
        }
    }
}

/**
 * Builder
 */
void BuilderAnalyzer::struct_analyze() {
    for (const auto &agpi : spis[SPT_AGPI]) {
        for (const auto &ica : spis[SPT_ICA]) {
            if (agpi[0] == ica[0] && agpi[1] == ica[1] && agpi[2] != ica[2]) {
                add_pattern(new Builder(sys[ica[0]], sys[ica[1]], sys[agpi[2]],
                                        sys[ica[2]]));
            }
        }
    }
}

void VisitorAnalyzer::struct_analyze() {
    for (const auto &icd : spis[SPT_ICD]) {
        for (const auto &dpi : spis[SPT_DPI]) {
            if (icd[0] == dpi[0] && icd[1] == dpi[1] &&
                icd[2] != dpi[2]
                // visitor --> concrete element
                && sys.hasDependency(dpi[0], icd[2])
                // concrete element --> visitor
                && sys.hasDependency(icd[2], dpi[0])
                // concrete element --|> element
                && sys.hasInheritance(icd[2], dpi[2])) {
                add_pattern(new Visitor(sys[dpi[2]], sys[dpi[0]], sys[icd[2]],
                                        sys[dpi[1]]));
            }
        }
    }
}

// void AdapterAnalyzer::behavioral_check() {
//     for (const auto &p : m_adapters) {
//         p.print();
//         m_real.push_back(p.behavioral_check());
//     }
// }
