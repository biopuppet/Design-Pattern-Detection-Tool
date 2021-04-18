#include <iostream>
#include <algorithm>

#include "gcdr.hpp"
#include "pattern_analyzer.hpp"

const PatternMap PatternAnalyzer::pattern_map = {
#define PATTERN(x) {#x, PatternType::PT_##x},
#include "pattern.def"
};

void PatternAnalyzer::analyze(const std::string &pattern) {
    if (pattern.empty()) {
#define PATTERN(x) analyze_##x();
#include "pattern.def"
        return;
    }
    else if (!pattern_map.count(pattern)) {
        std::cerr << "Unknow pattern name " << pattern << std::endl;
        return;
    }
    pp = pattern_map.at(pattern);

    switch (pp) {
#define PATTERN(x)     \
    case PT_##x:       \
        analyze_##x(); \
        break;
#include "pattern.def"
    default:
        break;
    }
    // std::cout << proxys.size() << std::endl;
    behavoiral_check();
}

void PatternAnalyzer::behavoiral_check() {
    for (const auto &proxy : proxys) {
        behavoiral_check(proxy);
    }
    // std::cout << proxys.size() << std::endl;
}

void PatternAnalyzer::analyze_proxy() {
    for (const auto &ica : spis[SPT_ICA]) {
        for (const auto &ci : spis[SPT_CI]) {
            if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
                proxys.emplace_back(sys[ci[0]], sys[ci[1]], sys[ci[2]],
                                    Proxy::RefRealSubject);
            }
        }
    }

    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &iass : spis[SPT_IASS]) {
            if (ci[0] == iass[0] && ci[2] == iass[1]) {
                proxys.emplace_back(sys[ci[0]], sys[ci[1]], sys[ci[2]],
                                    Proxy::RefSubject);
            }
        }
    }
}

void PatternAnalyzer::analyze_adapter() {
    for (const auto &ica : spis[SPT_ICA]) {
        if (!sys.hasInheritance(ica[2], ica[0])) {
            // CI && ICA, same as Proxy
            adapters.emplace_back(sys[ica[0]], sys[ica[1]], sys[ica[2]]);
            printf("Adapter: (%s, %s, %s)\n", sys[ica[0]].name(),
                   sys[ica[1]].name(), sys[ica[2]].name());
        }
    }
}

void PatternAnalyzer::analyze_composite() {
    for (const auto &ci : spis[SPT_CI]) {
        if (sys.hasAssOrAgg(ci[2], ci[0])) {
            composites.emplace_back(sys[ci[0]], sys[ci[1]], sys[ci[2]]);
            printf("Composite: (%s, %s, %s)\n", sys[ci[0]].name(),
                   sys[ci[1]].name(), sys[ci[2]].name());
        }
    }
}

void PatternAnalyzer::analyze_decorator() {
    for (const auto &mli : spis[SPT_MLI]) {
        for (const auto &ci : spis[SPT_CI]) {
            if (mli[0] == ci[0] && mli[1] == ci[2] && mli[2] != ci[1] &&
                sys.hasAssOrAgg(ci[2], ci[0])) {
                decorators.emplace_back(sys[mli[0]], sys[ci[1]], sys[ci[2]],
                                        sys[mli[2]]);
                printf("Decorator: (%s, %s, %s, %s)\n", sys[mli[0]].name(),
                       sys[ci[1]].name(), sys[ci[2]].name(),
                       sys[mli[2]].name());
            }
        }
    }
}

void PatternAnalyzer::analyze_bridge() {
    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &ipag : spis[SPT_IPAG]) {
            if (ipag[2] == ci[0] && ipag[1] != ci[2] && ipag[2] != ci[1] &&
                ci[1] != ipag[1] && ci[2] != ipag[2]) {
                bridges.emplace_back(sys[ipag[0]], sys[ipag[1]], sys[ipag[2]],
                                     sys[ci[1]], sys[ci[2]]);
                printf("Bridge: (%s, %s, %s, %s, %s)\n", sys[ipag[0]].name(),
                       sys[ipag[1]].name(), sys[ipag[2]].name(),
                       sys[ci[1]].name(), sys[ci[2]].name());
            }
        }
    }
}

void PatternAnalyzer::analyze_flyweight() {
    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &agpi : spis[SPT_AGPI]) {
            if (agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
                flyweights.emplace_back(sys[agpi[2]], sys[ci[0]], sys[ci[1]],
                                        sys[ci[2]]);
                printf("Flyweight: (%s, %s, %s, %s)\n", sys[agpi[2]].name(),
                       sys[ci[0]].name(), sys[ci[1]].name(), sys[ci[2]].name());
            }
        }
    }
}

void PatternAnalyzer::analyze_visitor() {
    // std::cout << "visitor!\n";
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
                visitors.emplace_back(sys[dpi[2]], sys[dpi[0]], sys[icd[2]],
                                      sys[dpi[1]]);
                printf("visitor: (%s %s %s %s)\n", sys[dpi[2]].name(),
                       sys[dpi[0]].name(), sys[icd[2]].name(),
                       sys[dpi[1]].name());
            }
        }
    }
}

bool PatternAnalyzer::behavoiral_check(const Proxy &proxy) {
    // Looking for 3 identical method signature
    std::vector<Method> result;
    auto &sub = proxy.subject.methods;
    auto &pro = proxy.proxy.methods;
    auto &real = proxy.real_subject.methods;
    std::set_intersection(pro.begin(), pro.end(), sub.begin(), sub.end(),
                          std::inserter(result, result.begin()), MethodCmp());
    std::set_intersection(real.begin(), real.end(), result.begin(),
                          result.end(), result.begin(), MethodCmp());
    for (const auto &it : result) {
        std::cout << it.name << std::endl;
    }
    if (result.size()) {
        std::cout << "Proxy!!!\n";
        return true;
    }
    return false;
}
