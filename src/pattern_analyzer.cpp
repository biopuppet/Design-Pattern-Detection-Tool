#include "pattern_analyzer.hpp"

#include <iostream>

const PatternMap PatternAnalyzer::pattern_map = {
#define PATTERN(x, c) {#x, PatternType::PT_##x},
#include "pattern.def"
};

PatternAnalyzer *PatternAnalyzer::createPatternAnalyzer(
    const SubPatternDetector &spd, const std::string &p) {
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
  case PT_##X:        \
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
        add_pattern(
            new Proxy(sys[ci[0]], sys[ci[1]], sys[ci[2]], Proxy::RefSubject));
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
        add_pattern(
            new Decorator(sys[mli[0]], sys[ci[1]], sys[ci[2]], sys[mli[2]]));
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
        add_pattern(
            new Flyweight(sys[agpi[2]], sys[ci[0]], sys[ci[1]], sys[ci[2]]));
      }
    }
  }
}

// TODO: Facade implementation undetermined
// Facade with a concrete facade
// ICA & ICA (& ICA)
void FacadeAnalyzer::struct_analyze() {
  for (const auto &ica1 : spis[SPT_ICA]) {
    for (const auto &ica2 : spis[SPT_ICA]) {
      if (ica1[2] != ica2[2] && ica1[0] == ica2[0] && ica1[1] == ica2[1]) {
        add_pattern(
            new Facade(sys[ica1[0]], sys[ica1[1]], sys[ica1[2]], sys[ica2[2]]));
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
        add_pattern(
            new Builder(sys[ica[0]], sys[ica[1]], sys[agpi[2]], sys[ica[2]]));
      }
    }
  }
}

/**
 * Prototype
 */
void PrototypeAnalyzer::struct_analyze() {
  for (const auto &agpi : spis[SPT_AGPI]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
        add_pattern(
            new Prototype(sys[agpi[2]], sys[ci[0]], sys[ci[1]], sys[ci[2]]));
      }
    }
  }
}

/**
 * Singleton
 */
void SingletonAnalyzer::struct_analyze() {
  for (const auto &sass : spis[SPT_SASS]) {
    add_pattern(new Singleton(sys[sass[0]]));
  }
}

/**
 * ResponsibilityChain
 */
void ResponsibilityChainAnalyzer::struct_analyze() {
  for (const auto &sass : spis[SPT_SASS]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (sass[0] == ci[0]) {
        add_pattern(
            new ResponsibilityChain(sys[ci[0]], sys[ci[1]], sys[ci[2]]));
      }
    }
  }
}

/**
 * Command
 */
void CommandAnalyzer::struct_analyze() {
  for (const auto &agpi : spis[SPT_AGPI]) {
    for (const auto &ica : spis[SPT_ICA]) {
      if (agpi[0] == ica[0] && agpi[1] == ica[1] && agpi[2] != ica[2]) {
        add_pattern(
            new Command(sys[agpi[2]], sys[ica[0]], sys[ica[1]], sys[ica[2]]));
      }
    }
  }
}

/**
 * Interpreter
 */
void InterpreterAnalyzer::struct_analyze() {
  for (const auto &iagg : spis[SPT_IAGG]) {
    for (const auto &ipd : spis[SPT_IPD]) {
      if (iagg[0] == ipd[0] && iagg[1] != ipd[1] && iagg[1] != ipd[2]) {
        add_pattern(new Interpreter(sys[ipd[2]], sys[ipd[0]], sys[ipd[1]],
                                    sys[iagg[1]]));
      }
    }
  }
}

/**
 * Iterator
 * ICA & ICD
 */
void IteratorAnalyzer::struct_analyze() {
  for (const auto &ica : spis[SPT_ICA]) {
    for (const auto &icd : spis[SPT_ICD]) {
      if (ica[0] != icd[0] && ica[1] == icd[2] && ica[2] == icd[1]) {
        add_pattern(
            new Iterator(sys[ica[0]], sys[ica[1]], sys[icd[0]], sys[icd[1]]));
      }
    }
  }
}

/**
 * Mediator
 * ICA & CI
 */
void MediatorAnalyzer::struct_analyze() {
  for (const auto &ica : spis[SPT_ICA]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (ica[2] == ci[1] && ica[1] != ci[0] && ica[1] != ci[2] &&
          ica[0] != ci[0] && ica[0] != ci[2] &&
          // Colleague --> Mediator
          sys.hasAssociation(ci[0], ica[0]) &&
          // ConcreteMediator --> ConcreteColleague2
          sys.hasAssociation(ica[1], ci[2])) {
        add_pattern(new Mediator(sys[ica[0]], sys[ica[1]], sys[ci[0]],
                                 sys[ci[1]], sys[ci[2]]));
      }
    }
  }
}

/**
 * Memento
 * AGPI && DPI
 */
void MementoAnalyzer::struct_analyze() {
  for (const auto &agpi : spis[SPT_AGPI]) {
    for (const auto &dpi : spis[SPT_DPI]) {
      if (agpi[0] == dpi[0] && agpi[1] == dpi[1] && agpi[2] != dpi[2]) {
        add_pattern(
            new Memento(sys[dpi[0]], sys[dpi[1]], sys[agpi[2]], sys[dpi[2]]));
      }
    }
  }
}

/**
 * Visitor
 */
void VisitorAnalyzer::struct_analyze() {
  for (const auto &icd : spis[SPT_ICD]) {
    for (const auto &dpi : spis[SPT_DPI]) {
      if (icd[0] == dpi[0] && icd[1] == dpi[1] && icd[2] != dpi[2] &&
          // visitor --> concrete element
          sys.hasDependency(dpi[0], icd[2]) &&
          // concrete element --> visitor
          sys.hasDependency(icd[2], dpi[0]) &&
          // concrete element --|> element
          sys.hasInheritance(icd[2], dpi[2])) {
        add_pattern(
            new Visitor(sys[dpi[2]], sys[dpi[0]], sys[icd[2]], sys[dpi[1]]));
      }
    }
  }
}

// void AdapterAnalyzer::behavioral_check() {
//     for (const auto &p : adapters_) {
//         p.print();
//         real_.push_back(p.behavioral_check());
//     }
// }
