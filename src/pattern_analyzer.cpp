#include "pattern_analyzer.hpp"

#include <algorithm>
#include <iostream>

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

/**
 * expression bop='.' ( IDENTIFIER | methodCall | ... )
 * attrs_ ∩ caller -> result_
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
    auto caller = expr->getText();
    auto sr = call->getText();
    for (const auto &attr : attrs_) {
      // TODO: 2 types of caller: direct & indirect calling mode
      if (attr->name_ == caller) {
        // std::cout << "Caller: " << caller << std::endl;
        // std::cout << "Method: " << sr << std::endl;
        // std::cout << ctx->getText() << std::endl;
        result_.emplace_back(ctx);
        return;
      }
    }
  }
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
    if (!sys.hasInheritance(ica[2], ica[0]) && !sys.hasAssOrAgg(ica[2], ica[0])
        // && !sys.hasDependency(ica[2], ica[0])
    ) {
      add({ica[0], ica[1], ica[2]});
    }
  }
}

/**
 * Target.[Request] = Adapter.[Request] → Adaptee.[SpecificRequest]
 */
void AdapterAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.adapter_], *sys[p.target_]);
    auto &attrs = sys.edge(p.adapter_, p.adaptee_).getAssAttrs();
    DpdtJavaBehavioralListener listener{attrs};

    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      // traverse request method
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

void ProxyAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    if (sys.hasAssociation(ci[2], ci[1])) {
      add(Proxy{ci[0], ci[1], ci[2], Proxy::RefRealSubject});
    }
    if (sys.hasAssociation(ci[2], ci[0])) {
      add(Proxy(ci[0], ci[1], ci[2], Proxy::RefSubject));
    }
  }
}

/**
 * Subject.[Method] = Proxy.[Method] → RealSubject.[Method]
 */
void ProxyAnalyzer::behavioral_analyze() {
  // Looking for 3 identical method signature
  for (auto &p : patterns_) {
    auto res = intersected(*sys[p.proxy_], *sys[p.subject_]);

    Edge *edge = nullptr;
    if (p.type_ == Proxy::RefRealSubject) {
      edge = &sys.edge(p.proxy_, p.real_subject_);
    } else {
      edge = &sys.edge(p.proxy_, p.subject_);
    }
    auto &attrs = edge->getAssAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : res) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

void CompositeAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    if (sys.hasAggregation(ci[2], ci[0])) {
      add(Composite(ci[0], ci[2], ci[1]));
    }
  }
}

/**
 * Component.[Method] = Composite.[Method] → Component.[Method]
 */
void CompositeAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.composite_], *sys[p.component_]);
    auto result2 = intersected(result, sys[p.leaf_]->methods_);
    auto &attrs = sys.edge(p.composite_, p.component_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

void DecoratorAnalyzer::struct_analyze() {
  for (const auto &mli : spis[SPT_MLI]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (mli[0] == ci[0] && mli[1] == ci[2] && mli[2] != ci[1] &&
          sys.hasAssOrAgg(ci[2], ci[0])) {
        add(Decorator(mli[0], ci[1], ci[2], mli[2]));
      }
    }
  }
}

/**
 * (1) Component.[Method] = Decorator.[Method] → Component.[Method]
 * (2) Component.[Method] = Decorator.[Method]
 *     = ConcreteDecorator.[Method] → Component.[Method]
 */
void DecoratorAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.decorator_], *sys[p.component_]);
    auto &ass_attrs = sys.edge(p.decorator_, p.component_).getAssAttrs();
    auto &attrs = ass_attrs.size()
                      ? ass_attrs
                      : sys.edge(p.decorator_, p.component_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
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
        add(Bridge(ipas[0], ipas[1], ipas[2], ci[1], ci[2]));
      }
    }
  }
}

/**
 * Abstraction.[Method] = RefinedAbstraction.[Method]
 *  → Implementor.[Method] = ConImplementor.[Method]
 */
void BridgeAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.refined_abstraction_], *sys[p.abstraction_]);
    auto &attrs = sys.edge(p.abstraction_, p.implementor_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

void FlyweightAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    for (const auto &agpi : spis[SPT_AGPI]) {
      if (sys.hasDependency(agpi[2], agpi[0]) &&
        agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
        add(Flyweight(agpi[2], ci[0], ci[1], ci[2]));
      }
    }
  }
}

/**
 * FlyweightFactory.[Method] ⇒ Flyweight,
 * FlyweightFactory.[Method] → ConcreteFlyweight.[Constructor]
 */
void FlyweightAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto &attrs = sys.edge(p.factory_, p.concrete_flyweight_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : sys[p.flyweight_]->methods_) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
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
    add(Facade(i, nodes));
  }
}

/**
 * No behavioral features
 */
void FacadeAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    p.setBehave(true);
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
        add(AbstractFactory(icd[0], icd[1], ci[0], ci[1], ci[2]));
      }
    }
  }
}

/**
 * AbstractFactory.[Method] = ConFactory.[Method] ⇒ Product
 * ConFactory.[Method] → ConProduct.[Constructor]
 */
void AbstractFactoryAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    // DpdtJavaBehavioralListener listener;
    // for (auto &request : sys[p.concrete_factory_]->methods_) {
    //   // std::cout << "request: " << request->name() << std::endl;
    //   tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    // }
    p.setBehave(true);
  }
}

/**
 * Builder
 */
void BuilderAnalyzer::struct_analyze() {
  for (const auto &aspi : spis[SPT_ASPI]) {
    for (const auto &ica : spis[SPT_ICA]) {
      if (aspi[0] == ica[0] && aspi[1] == ica[1] && aspi[2] != ica[2]) {
        add(Builder(ica[0], ica[1], aspi[2], ica[2]));
      }
    }
  }
}

/**
 * Builder.[Method] = ConBuilder.[Method] ⇒ Product
 * Director.[Method] → (Builder.[Method] = ConBuilder.[Method])
 */
void BuilderAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto &attrs = sys.edge(p.director_, p.builder_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : sys[p.director_]->methods_) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

/**
 * Factory
 */
void FactoryAnalyzer::struct_analyze() {
  for (const auto &dci : spis[SPT_DCI]) {
    for (const auto &icd : spis[SPT_ICD]) {
      if (dci[0] != icd[0] && dci[1] == icd[2] && dci[2] == icd[1]) {
        add(Factory(dci[0], dci[1], icd[0], icd[1]));
      }
    }
  }
}

/**
 * Creator.[Mehtod] = ConcreteCreator.[Mehod] ⇒ Product
 */
void FactoryAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    p.setBehave(true);
  }
}

/**
 * Prototype
 */
void PrototypeAnalyzer::struct_analyze() {
  for (const auto &agpi : spis[SPT_ASPI]) {
    for (const auto &ci : spis[SPT_CI]) {
      if (agpi[0] == ci[0] && agpi[1] == ci[1] && agpi[2] != ci[2]) {
        add(Prototype(agpi[2], ci[0], ci[1], ci[2]));
      }
    }
  }
}

/**
 * Client.[Method] -> Prototype.[Method]
 */
void PrototypeAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto &attrs = sys.edge(p.client_, p.prototype_).getAssAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : sys[p.client_]->methods_) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

/**
 * Singleton
 */
void SingletonAnalyzer::struct_analyze() {
  for (size_t i = 0; i < sys.size(); ++i) {
    if (sys.hasDependency(i, i)) {
      add(Singleton(i));
    }
  }
}

/**
 *  Singleton.[Constructor] : private/protected/static public
 */
void SingletonAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto &ctors = sys[p.singleton_]->ctors_;
    for (auto ctor : ctors) {
      if (ctor && (ctor->isPrivate() || ctor->isProtected() ||
                   ctor->isStaticPublic())) {
        p.setBehave(1);
        break;
      }
    }
  }
}

/**
 * ResponsibilityChain
 */
void ResponsibilityChainAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    if (sys.hasDependency(ci[0], ci[0])) {
      add(ResponsibilityChain(ci[0], ci[1], ci[2]));
    }
  }
}

/**
 * Handler.[Method] = ConcreteHandlerB.[Method]
 *  = ConcreteHandlerA.[Mehtod] → Handler.[Method];
 * Handler.[Method] = ConcreteHandlerA.[Method]
 *  = ConcreteHandlerB.[Method] → Handler.[Method]
 */
void ResponsibilityChainAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.concrete_handler1_], *sys[p.handler_]);
    auto &attrs = sys.edge(p.handler_, p.concrete_handler1_).getAssAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

/**
 * Command
 */
void CommandAnalyzer::struct_analyze() {
  for (const auto &agpi : spis[SPT_AGPI]) {
    for (const auto &ica : spis[SPT_ICA]) {
      if (agpi[0] == ica[0] && agpi[1] == ica[1] && agpi[2] != ica[2]) {
        add(Command(agpi[2], ica[0], ica[1], ica[2]));
      }
    }
  }
}

/**
 * Commander.[Method] = ConcreteCommand.[Method] → Receiver.[Mehtod]
 * Invoker.[Method] → Command.[Method] = ConcreteCommand.[Method]
 */
void CommandAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.concrete_command_], *sys[p.command_]);
    auto &attrs = sys.edge(p.concrete_command_, p.receiver_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}

/**
 * Interpreter
 */
void InterpreterAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    if (sys.hasAggregation(ci[2], ci[0])) {
      add(Interpreter(ci[0], ci[1], ci[2]));
    }
  }
}

/**
 * AbstractExpression.[Method] = TerminalExpression.[Method]
 *  = NonerminalExpression.[Method] → Receiver.[Method]
 */
void InterpreterAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.terminal_expr_], *sys[p.abstract_expr_]);
    auto result2 = intersected(*sys[p.nonterminal_expr_], *sys[p.abstract_expr_]);
    p.setBehave(!result2.empty() && !result.empty());
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
        add(Iterator(ica[0], ica[1], icd[0], icd[1]));
      }
    }
  }
}

/**
 * ConcreteAggregate.[Method] ⇒ ConcreteIterator
 */
void IteratorAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    if (sys.hasDependency(p.concrete_aggregate_, p.concrete_iterator_))
      p.setBehave(true);
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
        add(Mediator(ica[0], ica[1], ci[0], ci[1], ci[2]));
      }
    }
  }
}

/**
 * Colleague.[Method] ⇒ Mediator,
 * Mediator.[Method] = ConMediator.[Method] → Colleague.[Method]
 */
void MediatorAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.concrete_mediator_], *sys[p.mediator_]);
    auto &attrs = sys.edge(p.concrete_mediator_, p.concrete_colleague1_).getAssAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
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
        add(Memento(dpi[0], agpi[2], dpi[2]));
      }
    }
  }
}

/**
 * Caretaker.[Method] ⇒ Memento,
 * 
 */
void MementoAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    p.setBehave(true);
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
        add(Observer(agpi[2], icd[2], icd[0], icd[1]));
      }
    }
  }
}

/**
 * Subject.[Method] → Observer.[Method] = ConObserver.[Method]
 */
void ObserverAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto &attrs = sys.edge(p.subject_, p.observer_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : sys[p.subject_]->methods_) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
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
        add(State(agpi[2], ci[0], ci[1], ci[2]));
      }
    }
  }
}

/**
 * State.[Method] = ConStateA.[Method] → ConStateB.[Constructor]
 */
void StateAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.state_], *sys[p.concrete_state1_]);
    auto &attrs = sys.edge(p.context_, p.state_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
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
        add(Strategy(aspi[2], ci[0], ci[1], ci[2]));
      }
    }
  }
}

/**
 * Context.[Method] → Strategy.[Method] = ConStrategyA.[Method]
 * Context.[Method] → Strategy.[Method] = ConStrategyB.[Method]
 */
void StrategyAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.strategy_], *sys[p.concrete_strategy1_]);
    auto &attrs = sys.edge(p.context_, p.strategy_).getAggAttrs();
    DpdtJavaBehavioralListener listener{attrs};
    for (auto &request : result) {
      // std::cout << "request: " << request->name() << std::endl;
      tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    }
    p.setBehave(listener.nonEmpty());
  }
}


/**
 * Template
 * CI & !Proxy
 */
void TemplateAnalyzer::struct_analyze() {
  for (const auto &ci : spis[SPT_CI]) {
    if (!sys.hasAssOrAgg(ci[1], ci[0]) && !sys.hasAssOrAgg(ci[2], ci[0])) {
      add(Template(ci[0], ci[1], ci[2]));
    }
  }
}

/**
 * AbstractClass.[Method] → AbstractClass.[Method] = ConcreteClass.[Method]
 */
void TemplateAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.abstract_], *sys[p.concrete1_]);
    auto result2 = intersected(result, sys[p.concrete2_]->methods_);
    p.setBehave(!result2.empty());
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
        add(Visitor(dpi[2], dpi[0], icd[2], dpi[1]));
      }
    }
  }
}

/**
 * Element.[Method] = ConElement.[Method] → Visitor.[Method]
 */
void VisitorAnalyzer::behavioral_analyze() {
  for (auto &p : patterns_) {
    auto result = intersected(*sys[p.concrete_elem], *sys[p.element]);
    // DpdtJavaBehavioralListener listener{};
    // for (auto &request : result) {
    //   // std::cout << "request: " << request->name() << std::endl;
    //   tree::ParseTreeWalker::DEFAULT.walk(&listener, request->ctx_);
    // }
    p.setBehave(!result.empty());
  }
}

void AdapterAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural)
      printf("Adapter<%s, %s, %s>\n", name(p.target_), name(p.adapter_),
             name(p.adaptee_));
  }
}

void ProxyAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural)
      printf("Proxy<%s, %s, %s>\n", name(p.subject_), name(p.real_subject_),
             name(p.proxy_));
  }
}

void CompositeAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Composite<%s, %s, %s>\n", name(p.component_), name(p.composite_),
             name(p.leaf_));
    }
  }
}

void DecoratorAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Decorator<%s, %s, %s, %s>\n", name(p.component_),
             name(p.concrete_component_), name(p.decorator_),
             name(p.concrete_decorator_));
    }
  }
}

void BridgeAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Bridge<%s, %s, %s, %s, %s>\n", name(p.abstraction_),
             name(p.refined_abstraction_), name(p.implementor_),
             name(p.concrete_implementor1_), name(p.concrete_implementor2_));
    }
  }
}

void FlyweightAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Flyweight<%s, %s, %s, %s>\n", name(p.factory_),
             name(p.flyweight_), name(p.concrete_flyweight_),
             name(p.unshared_concrete_flyweight_));
    }
  }
}

void FacadeAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Facade<%s, ", name(p.facade_));
      printf("Subsystems<%s", p.subsystems_[0]->name());
      for (size_t i = 1; i < p.subsystems_.size(); ++i) {
        printf(", %s", p.subsystems_[i]->name());
      }
      printf(">>\n");
    }
  }
}

void AbstractFactoryAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("AbstractFactory<%s, %s, %s, %s, %s>\n", name(p.abstract_factory_),
             name(p.concrete_factory_), name(p.product_),
             name(p.concrete_product1_), name(p.concrete_product2_));
    }
  }
}

void BuilderAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Builder<%s, %s, %s, %s>\n", name(p.builder_),
             name(p.concrete_builder_), name(p.director_), name(p.product_));
    }
  }
}

void FactoryAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Factory<%s, %s, %s, %s>\n", name(p.product_),
             name(p.concrete_product_), name(p.creator_),
             name(p.concrete_creator_));
    }
  }
}

void PrototypeAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Prototype<%s, %s, %s, %s>\n", name(p.client_), name(p.prototype_),
             name(p.concrete_prototype_), name(p.concrete_prototype2_));
    }
  }
}

void SingletonAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Singleton<%s>\n", name(p.singleton_));
    }
  }
}

void ResponsibilityChainAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("ResponsibilityChain<%s, %s, %s>\n", name(p.handler_),
             name(p.concrete_handler1_), name(p.concrete_handler2_));
    }
  }
}

void CommandAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Command<%s, %s, %s, %s>\n", name(p.invoker_), name(p.command_),
             name(p.concrete_command_), name(p.receiver_));
    }
  }
}

void InterpreterAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Interpreter<%s, %s, %s>\n", name(p.abstract_expr_),
             name(p.terminal_expr_), name(p.nonterminal_expr_));
    }
  }
}

void IteratorAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Iterator<%s, %s, %s, %s>\n", name(p.iterator_),
             name(p.concrete_iterator_), name(p.aggregate_),
             name(p.concrete_aggregate_));
    }
  }
}

void MediatorAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Mediator<%s, %s, %s, %s, %s>\n", name(p.mediator_),
             name(p.concrete_mediator_), name(p.colleague_),
             name(p.concrete_colleague1_), name(p.concrete_colleague2_));
    }
  }
}

void MementoAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Memento<%s, %s, %s>\n", name(p.memento_),
              name(p.caretaker_), name(p.originator_));
    }
  }
}

void ObserverAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Observer<%s, %s, %s, %s>\n", name(p.subject_),
             name(p.concrete_subject_), name(p.observer_),
             name(p.concrete_observer_));
    }
  }
}

void StateAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("State<%s, %s, %s, %s>\n", name(p.context_), name(p.state_),
             name(p.concrete_state1_), name(p.concrete_state2_));
    }
  }
}

void StrategyAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Strategy<%s, %s, %s, %s>\n", name(p.context_), name(p.strategy_),
             name(p.concrete_strategy1_), name(p.concrete_strategy2_));
    }
  }
}

void TemplateAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Template<%s, %s, %s>\n", name(p.abstract_), name(p.concrete1_),
             name(p.concrete2_));
    }
  }
}

void VisitorAnalyzer::print(bool structural) const {
  for (const auto &p : patterns_) {
    if (p.behave() || structural) {
      printf("Visitor<%s, %s, %s, %s>\n", name(p.element), name(p.visitor),
             name(p.concrete_elem), name(p.concrete_visitor));
    }
  }
}