#include "pattern.hpp"

#include <algorithm>
#include <iostream>

using MethodList = std::vector<Method *>;

static MethodList intersected(const MethodList &m1, const MethodList &m2) {
  MethodList res;
  for (const auto &it1 : m1) {
    for (const auto &it2 : m2) {
      if (it1->name == it2->name) {
        res.emplace_back(it1);
      }
    }
  }
  return res;
}

/**
 * Target.[Method] = Adapter.[Method] → Adaptee.[Method]
 */
bool Adapter::behavioral_check() const {
  auto result = intersected(target_.methods, adapter_.methods);

  for (auto &it : result) {
    std::cout << "request: " << it->name << std::endl;
  }

  bool indep = intersected(result, adaptee_.methods).size();
  if (result.size() && !indep) {
    return true;
  }
  return false;
}

/**
 * Subject.[Method] = Proxy.[Method] → RealSubject.[Method]
 */
bool Proxy::behavioral_check() const {
  // Looking for 3 identical method signature
  auto res = intersected(subject_.methods, proxy_.methods);
  res = intersected(res, real_subject_.methods);
  for (auto &it : res) {
    std::cout << "request: " << it->name << std::endl;
  }
  if (res.size()) {
    return true;
  }
  return false;
}

/**
 * Component.[Method] = Composite.[Method] → Component.[Method]
 */
bool Composite::behavioral_check() const {
  auto result = intersected(component_.methods, composite_.methods);
  auto result2 = intersected(result, leaf_.methods);
  for (auto &it : result2) {
    std::cout << "method: " << it->name << std::endl;
  }

  bool agg = false;
  for (const auto &it : composite_.attrs) {
    if (it->type == Attribute::List && it->associate == &component_) {
      agg = true;
      std::cout << it->name << " ";
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
bool Decorator::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Abstraction.[Method] = Ref inedAbstraction.[Method]
 *  → Implementor.[Method] = ConImplementor.[Method]
 */
bool Bridge::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * FlyweightFactory.[Method] ⇒ Flyweight,
 * FlyweightFactory.[Method] → ConcreteFlyweight.[Constructor]
 */
bool Flyweight::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Facade.[Method] = ConcreteFacade.[Method] → SubSystem.[Method]
 */
bool Facade::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * AbstractFactory.[Method] = ConFactory.[Method] ⇒ Product
 * ConFactory.[Method] → ConProduct.[ConstrucationMethod]
 */
bool AbstractFactory::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Builder.[Method] = ConBuilder.[Method] ⇒ Product
 * Director.[Method] → (Builder.[Method] = ConBuilder.[Method])
 */
bool Builder::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Creator.[Mehtod] = ConcreteCreator.[Mehod] ⇒ Product
 */
bool Factory::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * ConcretePrototype ∼ {Cloneable}
 */
bool Prototype::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 *  Singleton.[Constructor] : private/protected/static public
 */
bool Singleton::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Handler.[Method] = ConcreteHandlerB.[Method]
 *  = ConcreteHandlerA.[Mehtod] → Handler.[Method];
 * Handler.[Method] = ConcreteHandlerA.[Method]
 *  = ConcreteHandlerB.[Method] → Handler.[Method]
 */
bool ResponsibilityChain::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Commander.[Method] = ConcreteCommand.[Method] → Receiver.[Mehtod]
 * Invoker.[Method] → Command.[Method] = ConcreteCommand.[Method]
 */
bool Command::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * AbstractExpression.[Method] = TerminalExpression.[Method]
 *  = NonerminalExpression.[Method] → Receiver.[Method]
 */
bool Interpreter::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * ConcreteIterator.[Method] ⇒ ConcreteAggregate.Collection.Object
 */
bool Iterator::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Colleague.[Method] ⇒ Mediator,
 * Mediator.[Method] = ConMediator.[Method] → Colleague.[Method]
 */
bool Mediator::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Caretaker.[Method] ⇒ Memento,
 * Original.[Method] → ConMemento.[Method]
 */
bool Memento::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Subject.[Method] → Observer.[Method] = ConObserver.[Method]
 */
bool Observer::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * State.[Method] = ConStateA.[Method] → ConStateB.[Constructor]
 * State.[Method] = ConStateB.[Method] → ConstateA.[Constructor]
 */
bool State::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Context.[Method] → Strategy.[Method] = ConStrategyA.[Method]
 * Context.[Method] → Strategy.[Method] = ConStrategyB.[Method]
 */
bool Strategy::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * AbstractClass.[Method] → AbstractClass.[Method] = ConcreteClass.[Method]
 */
bool Template::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

/**
 * Element.[Method] = ConElement.[Method] → Visitor.[Method]
 */
bool Visitor::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}
