#include "pattern_analyzer.hpp"

#include <iostream>
#include <algorithm>

#include "antlr4-runtime.h"

using namespace antlr4;
using MethodList = std::vector<Method *>;

const PatternMap PatternAnalyzer::pattern_map = {
#define PATTERN(x, c) {#x, PatternType::PT_##x},
#include "pattern.def"
};

/**
 * NOTE: result is a subset of m1
 */
static MethodList intersected(const MethodList &m1, const MethodList &m2) {
  MethodList res;
  for (const auto &it1 : m1) {
    for (const auto &it2 : m2) {
      if (it1->name_ == it2->name_) {
        res.emplace_back(it1);
      }
    }
  }
  return res;
}

inline static MethodList intersected(const Node &n1, const Node &n2) {
  return intersected(n1.methods_, n2.methods_);
}

PatternAnalyzer *PatternAnalyzer::createPatternAnalyzer(
    const SubPatternDetector &spd, const std::string &p) {
  if (p.empty()) {
    return new AllAnalyzer(spd);
  }
  if (!pattern_map.count(p)) {
    std::cerr << "Unknown pattern name " << p << std::endl;
    return nullptr;
  }
  switch (pattern_map.at(p)) {
#define PATTERN(X, C) \
  case PT_##X:        \
    return new C##Analyzer(spd);
#include "pattern.def"
    default:
      break;
  }
  return nullptr;
}

void AdapterAnalyzer::struct_analyze() {
  for (const auto &ica : spis[SPT_ICA]) {
    // ICA && !CI, different from Proxy
    if (!sys.hasInheritance(ica[2], ica[0])
        // && !sys.hasAssOrAgg(ica[2], ica[0])
        // && !sys.hasDependency(ica[2], ica[0])
    ) {
      add(Adapter(ica[0], ica[1], ica[2]));
    }
  }
}

/**
 * Target.[Request] = Adapter.[Request] → Adaptee.[SpecificRequest]
 */
void AdapterAnalyzer::behavioral_analyze() {
  for (const auto &p : patterns_) {
    auto result = intersected(*sys[p.adapter_], *sys[p.target_]);
    static DpdtJavaBehavioralListener listener;

    for (auto &request : result) {
      std::cout << "request: " << request->name() << std::endl;
      auto ctx = request->ctx_;
      
      tree::ParseTreeWalker::DEFAULT.walk(&listener, ctx);
    }

    // bool indep = intersected(result, adaptee_.methods_).size();
    real_.push_back(result.size() != 0);
  }
}

void ProxyAnalyzer::struct_analyze() {
  for (const auto &ica : spis[SPT_ICA]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
        add({ci[0], ci[1], ci[2], Proxy::RefRealSubject});
      }
    }
  }

  for (const auto &ci : spis[SPT_CI]) {
    for (const auto &iass : spis[SPT_IASS]) {
      if (ci[0] == iass[0] && ci[2] == iass[1]) {
        add(Proxy(ci[0], ci[1], ci[2],
                              Proxy::RefSubject));
      }
    }
  }
}

#if 0
void CompositeAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    if (sys.hasAggregation(ci[2], ci[0])) {
      add(new Composite(*sys[ci[0]], *sys[ci[2]], *sys[ci[1]]));
    }
  }
}

void DecoratorAnalyzer::struct_analyze() {
  for (const auto &mli : spis[SPT_MLI]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (mli[0] == ci[0] && mli[1] == ci[2] && mli[2] != ci[1] &&
          sys.hasAssOrAgg(ci[2], ci[0])) {
        add(new Decorator(*sys[mli[0]], *sys[ci[1]], *sys[ci[2]],
                                  *sys[mli[2]]));
      }
    }
  }
}

/**
 * The offical relation is aggregation(IPAG),
 * but it's implemented with one reference, i.e. IPAS.
 */
void BridgeAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    for (const auto &ipas : spis[SPT_IPAS]) {
      if (ipas[2] == ci[0] && ipas[1] != ci[2] && ipas[2] != ci[1] &&
          ci[1] != ipas[1] && ci[2] != ipas[2]) {
        add(new Bridge(*sys[ipas[0]], *sys[ipas[1]], *sys[ipas[2]],
                               *sys[ci[1]], *sys[ci[2]]));
      }
    }
  }
}

void FlyweightAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    for (const auto &agpi : spis[SPT_AGPI]) {
      if (agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
        add(new Flyweight(*sys[agpi[2]], *sys[ci[0]], *sys[ci[1]],
                                  *sys[ci[2]]));
      }
    }
  }
}

/**
 * TODO: Facade implementation undetermined
 */
void FacadeAnalyzer::struct_analyze() {
  for (size_t i = 0; i < sys.size(); ++i) {
    std::vector<Node *> nodes;
    for (size_t j = 0; j < sys.size(); ++j) {
      if (i == j) continue;
      if (sys.hasAssociation(i, j)
          // subsystem has no knowledge of the facade
          && !sys.hasAssociation(j, i) && !sys.hasDependency(j, i) &&
          !sys.hasInheritance(j, i) && !sys.hasInheritance(i, j)) {
        nodes.emplace_back(sys[j]);
      }
    }
    if (nodes.size() < Facade::LIMIT) continue;
    add(new Facade(*sys[i], nodes));
  }
}

/**
 * AbstractFactory
 */
void AbstractFactoryAnalyzer::struct_analyze() {
  for (const auto &icd : spis[SPT_ICD]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (icd[2] == ci[1] && icd[1] != ci[2] && icd[1] != ci[0] &&
          icd[0] != ci[2] && icd[0] != ci[0] &&
          sys.hasDependency(icd[1], ci[2])) {
        add(new AbstractFactory(*sys[icd[0]], *sys[icd[1]], *sys[ci[0]],
                                        *sys[ci[1]], *sys[ci[2]]));
      }
    }
  }
}

/**
 * Builder
 */
void BuilderAnalyzer::struct_analyze() {
  for (const auto &aspi : spis[SPT_ASPI]) {
    for (const auto &ica : spis[SPT_ICA]) {
      if (aspi[0] == ica[0] && aspi[1] == ica[1] && aspi[2] != ica[2]) {
        add(new Builder(*sys[ica[0]], *sys[ica[1]], *sys[aspi[2]],
                                *sys[ica[2]]));
      }
    }
  }
}

/**
 * Factory
 */
void FactoryAnalyzer::struct_analyze() {
  for (const auto &dci : spis[SPT_DCI]) {
    for (const auto &icd : spis[SPT_ICD]) {
      if (dci[0] != icd[0] && dci[1] == icd[2] && dci[2] == icd[1]) {
        add(new Factory(*sys[dci[0]], *sys[dci[1]], *sys[icd[0]],
                                *sys[icd[1]]));
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
        add(new Prototype(*sys[agpi[2]], *sys[ci[0]], *sys[ci[1]],
                                  *sys[ci[2]]));
      }
    }
  }
}

/**
 * Singleton
 */
void SingletonAnalyzer::struct_analyze() {
  for (const auto &sass : spis[SPT_SASS]) {
    add(new Singleton(*sys[sass[0]]));
  }
}

/**
 * ResponsibilityChain
 */
void ResponsibilityChainAnalyzer::struct_analyze() {
  for (const auto &sass : spis[SPT_SASS]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (sass[0] == ci[0]) {
        add(
            new ResponsibilityChain(*sys[ci[0]], *sys[ci[1]], *sys[ci[2]]));
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
        add(new Command(*sys[agpi[2]], *sys[ica[0]], *sys[ica[1]],
                                *sys[ica[2]]));
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
        add(new Interpreter(*sys[ipd[2]], *sys[ipd[0]], *sys[ipd[1]],
                                    *sys[iagg[1]]));
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
        add(new Iterator(*sys[ica[0]], *sys[ica[1]], *sys[icd[0]],
                                 *sys[icd[1]]));
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
        add(new Mediator(*sys[ica[0]], *sys[ica[1]], *sys[ci[0]],
                                 *sys[ci[1]], *sys[ci[2]]));
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
        add(new Memento(*sys[dpi[0]], *sys[dpi[1]], *sys[agpi[2]],
                                *sys[dpi[2]]));
      }
    }
  }
}

/**
 * Observer
 * AGPI && DPI
 */
void ObserverAnalyzer::struct_analyze() {
  for (const auto &agpi : spis[SPT_AGPI]) {
    for (const auto &icd : spis[SPT_ICD]) {
      if (agpi[0] == icd[0] && agpi[1] == icd[1] && agpi[2] != icd[2] &&
          // ConcreteSubject --> Subject
          sys.hasInheritance(icd[2], agpi[2])) {
        add(new Observer(*sys[agpi[2]], *sys[icd[2]], *sys[icd[0]],
                                 *sys[icd[1]]));
      }
    }
  }
}

/**
 * State
 * AGPI && DPI
 */
void StateAnalyzer::struct_analyze() {
  for (const auto &agpi : spis[SPT_AGPI]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
        add(
            new State(*sys[agpi[2]], *sys[ci[0]], *sys[ci[1]], *sys[ci[2]]));
      }
    }
  }
}

/**
 * Strategy
 * AGPI && DPI
 */
void StrategyAnalyzer::struct_analyze() {
  for (const auto &aspi : spis[SPT_ASPI]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (aspi[0] == ci[0] && aspi[1] == ci[1] && aspi[2] != ci[2]) {
        add(
            new Strategy(*sys[aspi[2]], *sys[ci[0]], *sys[ci[1]], *sys[ci[2]]));
      }
    }
  }
}

/**
 * Template
 * CI & !Proxy
 */
void TemplateAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    if (!sys.hasAssOrAgg(ci[1], ci[0]) && !sys.hasAssOrAgg(ci[2], ci[0])) {
      add(new Template(*sys[ci[0]], *sys[ci[1]], *sys[ci[2]]));
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
        add(new Visitor(*sys[dpi[2]], *sys[dpi[0]], *sys[icd[2]],
                                *sys[dpi[1]]));
      }
    }
  }
}

#endif

/**
 * expression bop='.' ( IDENTIFIER | methodCall | ... )
 */
void DpdtJavaBehavioralListener::enterExpression(
  JavaParser::ExpressionContext *ctx) {
    // sufficient condition
    if (!ctx->methodCall() || !ctx->bop) {
      return;
    }
    // assert(ctx->bop == '.');
    auto expr = ctx->expression(0);
    auto call = ctx->methodCall()->IDENTIFIER();
    if (expr && call) {
      std::cout << "Caller: " << expr->getText() << std::endl;
      std::cout << "Method: " << call->getText() << std::endl;
      
    }

}

/**
 * Subject.[Method] = Proxy.[Method] → RealSubject.[Method]
 */
void ProxyAnalyzer::behavioral_analyze() {
  // Looking for 3 identical method signature
  // auto res = intersected(subject_.methods_, proxy_.methods_);
  // res = intersected(res, real_subject_.methods_);
  // for (auto &it : res) {
    // std::cout << "request: " << it->name_ << std::endl;
  // }
}

#if 0
/**
 * Component.[Method] = Composite.[Method] → Component.[Method]
 */
void CompositeAnalyzer::behavioral_analyze() {
  auto result = intersected(component_.methods_, composite_.methods_);
  auto result2 = intersected(result, leaf_.methods_);
  for (auto &it : result2) {
    std::cout << "method: " << it->name_ << std::endl;
  }

  bool agg = false;
  for (const auto &it : composite_.attrs_) {
    if (it->dim_) {
      agg = true;
      std::cout << it->name_ << " ";
    }
  }
  if (result2.size() && agg) {
    return true;
  }
  return false;
}

/**
 * (1) Component.[Method] = Decorator.[Method] → Component.[Method]
 * (2) Component.[Method] = Decorator.[Method]
 *     = ConcreteDecorator.[Method] → Component.[Method]
 */
void DecoratorAnalyzer::behavioral_analyze() {
  auto result = intersected(component_.methods_, concrete_component_.methods_);
  auto result2 = intersected(result, decorator_.methods_);
  auto result3 = intersected(result2, concrete_decorator_.methods_);
  for (auto &it : result3) {
    std::cout << "method: " << it->name_ << std::endl;
  }
  
}

/**
 * Abstraction.[Method] = RefinedAbstraction.[Method]
 *  → Implementor.[Method] = ConImplementor.[Method]
 */
void BridgeAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * FlyweightFactory.[Method] ⇒ Flyweight,
 * FlyweightFactory.[Method] → ConcreteFlyweight.[Constructor]
 */
void FlyweightAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Facade.[Method] = ConcreteFacade.[Method] → SubSystem.[Method]
 */
void FacadeAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * AbstractFactory.[Method] = ConFactory.[Method] ⇒ Product
 * ConFactory.[Method] → ConProduct.[ConstrucationMethod]
 */
void AbstractFactoryAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Builder.[Method] = ConBuilder.[Method] ⇒ Product
 * Director.[Method] → (Builder.[Method] = ConBuilder.[Method])
 */
void BuilderAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Creator.[Mehtod] = ConcreteCreator.[Mehod] ⇒ Product
 */
void FactoryAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * ConcretePrototype ∼ {Cloneable}
 */
void PrototypeAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 *  Singleton.[Constructor] : private/protected/static public
 */
void SingletonAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Handler.[Method] = ConcreteHandlerB.[Method]
 *  = ConcreteHandlerA.[Mehtod] → Handler.[Method];
 * Handler.[Method] = ConcreteHandlerA.[Method]
 *  = ConcreteHandlerB.[Method] → Handler.[Method]
 */
void ResponsibilityChainAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Commander.[Method] = ConcreteCommand.[Method] → Receiver.[Mehtod]
 * Invoker.[Method] → Command.[Method] = ConcreteCommand.[Method]
 */
void CommandAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * AbstractExpression.[Method] = TerminalExpression.[Method]
 *  = NonerminalExpression.[Method] → Receiver.[Method]
 */
void InterpreterAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * ConcreteIterator.[Method] ⇒ ConcreteAggregate.Collection.Object
 */
void IteratorAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Colleague.[Method] ⇒ Mediator,
 * Mediator.[Method] = ConMediator.[Method] → Colleague.[Method]
 */
void MediatorAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Caretaker.[Method] ⇒ Memento,
 * Original.[Method] → ConMemento.[Method]
 */
void MementoAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Subject.[Method] → Observer.[Method] = ConObserver.[Method]
 */
void ObserverAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * State.[Method] = ConStateA.[Method] → ConStateB.[Constructor]
 * State.[Method] = ConStateB.[Method] → ConstateA.[Constructor]
 */
void StateAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Context.[Method] → Strategy.[Method] = ConStrategyA.[Method]
 * Context.[Method] → Strategy.[Method] = ConStrategyB.[Method]
 */
void StrategyAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * AbstractClass.[Method] → AbstractClass.[Method] = ConcreteClass.[Method]
 */
void TemplateAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

/**
 * Element.[Method] = ConElement.[Method] → Visitor.[Method]
 */
void VisitorAnalyzer::behavioral_analyze() {
  std::vector<Method *> result;
  
}

#endif

void AdapterAnalyzer::print() const {
  for (const auto &p : patterns_) {
    printf("Adapter<%s, %s, %s>\n", name(p.target_), name(p.adapter_),
          name(p.adaptee_));
  }
}

void ProxyAnalyzer::print() const {
  for (const auto &p : patterns_) {
    printf("Proxy<%s, %s, %s>\n", name(p.subject_), name(p.real_subject_),
          name(p.proxy_));
  }
}
