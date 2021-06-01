#ifndef DPDT_PATTERN_H
#define DPDT_PATTERN_H

#include <iostream>

#include "JavaParserBaseListener.h"
#include "graph.hpp"

class DpdtJavaBehavioralListener : public JavaParserBaseListener {
 public:
  DpdtJavaBehavioralListener(std::vector<Method *> &methods)
      : attrs_(nullptr), methods_(&methods) {}
  DpdtJavaBehavioralListener(std::vector<Attribute *> &attrs)
      : attrs_(&attrs), methods_(nullptr) {}
  void enterExpression(JavaParser::ExpressionContext * /*ctx*/) override;

  bool nonEmpty() const { return result_.size(); }

  std::vector<Attribute *> *attrs_;
  std::vector<Method *> *methods_;
  std::vector<JavaParser::ExpressionContext *> result_;
};

enum PatternType {
#define PATTERN(x, c) PT_##x,
#include "pattern.def"
};

class Pattern {
  bool behave_ = false;

 public:
  bool behave() const { return behave_; }
  void setBehave(bool behave) { behave_ = behave; }
};

/**
 * Adapter
 */
class Adapter : public Pattern {
 public:
  size_t target_;
  size_t adapter_;
  size_t adaptee_;

  Adapter(size_t target, size_t adapter, size_t adaptee)
      : target_(target), adapter_(adapter), adaptee_(adaptee) {}
};

/**
 * Proxy
 */
class Proxy : public Pattern {
 public:
  size_t subject_;
  size_t real_subject_;
  size_t proxy_;

  // CI && IASS   CI && ICA
  enum Type { RefSubject, RefRealSubject } type_;

  Proxy(size_t s, size_t rs, size_t p, Type t)
      : subject_(s), real_subject_(rs), proxy_(p), type_(t) {}
};

/**
 *
 */
class Composite : public Pattern {
 public:
  size_t component_;
  size_t composite_;
  size_t leaf_;

  Composite(size_t component, size_t composite, size_t leaf)
      : component_(component), composite_(composite), leaf_(leaf) {}
};

/**
 *
 */
class Decorator : public Pattern {
 public:
  size_t component_;
  size_t concrete_component_;
  size_t decorator_;
  size_t concrete_decorator_;

  Decorator(size_t component, size_t concrete_component, size_t decorator,
            size_t concrete_decorator)
      : component_(component),
        concrete_component_(concrete_component),
        decorator_(decorator),
        concrete_decorator_(concrete_decorator) {}
};

/**
 * IPAG(2) & CI(0)
 */
class Bridge : public Pattern {
 public:
  size_t abstraction_;
  size_t refined_abstraction_;
  size_t implementor_;
  size_t concrete_implementor1_;
  size_t concrete_implementor2_;

  Bridge(size_t abstraction, size_t refined_abstraction, size_t implementor,
         size_t concrete_implementor1, size_t concrete_implementor2)
      : abstraction_(abstraction),
        refined_abstraction_(refined_abstraction),
        implementor_(implementor),
        concrete_implementor1_(concrete_implementor1),
        concrete_implementor2_(concrete_implementor2) {}
};

/**
 * AGPI(0,1) & CI(0,1)
 */
class Flyweight : public Pattern {
 public:
  size_t factory_;
  size_t flyweight_;
  size_t concrete_flyweight_;
  size_t unshared_concrete_flyweight_;

  Method *operation;

  Flyweight(size_t factory, size_t flyweight, size_t concrete_flyweight,
            size_t unshared_concrete_flyweight)
      : factory_(factory),
        flyweight_(flyweight),
        concrete_flyweight_(concrete_flyweight),
        unshared_concrete_flyweight_(unshared_concrete_flyweight) {}
};

/**
 * ICD(0,1) & ICD(0,1) & ICD(0,1)
 */
class Facade : public Pattern {
 public:
  size_t facade_;
  std::vector<Node *> subsystems_;

  static constexpr size_t LIMIT = 2;

  Facade(size_t facade, std::vector<Node *> &subsystems)
      : facade_(facade), subsystems_(subsystems) {}
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class AbstractFactory : public Pattern {
 public:
  size_t abstract_factory_;
  size_t concrete_factory_;
  size_t product_;
  size_t concrete_product1_;
  size_t concrete_product2_;

  AbstractFactory(size_t abstract_factory, size_t concrete_factory,
                  size_t product, size_t concrete_product1,
                  size_t concrete_product2)
      : abstract_factory_(abstract_factory),
        concrete_factory_(concrete_factory),
        product_(product),
        concrete_product1_(concrete_product1),
        concrete_product2_(concrete_product2) {}
};

/**
 * Builder
 * AGPI(0,1) & ICA(0,1)
 */
class Builder : public Pattern {
 public:
  size_t builder_;
  size_t concrete_builder_;
  size_t director_;
  size_t product_;

  Builder(size_t builder, size_t concrete_builder, size_t director,
          size_t product)
      : builder_(builder),
        concrete_builder_(concrete_builder),
        director_(director),
        product_(product) {}
};

/**
 * Factory
 * DCI(0,1) & ICD(0,1)
 */
class Factory : public Pattern {
 public:
  size_t product_;
  size_t concrete_product_;
  size_t creator_;
  size_t concrete_creator_;

  Factory(size_t product, size_t concrete_product, size_t creator,
          size_t concrete_creator)
      : product_(product),
        concrete_product_(concrete_product),
        creator_(creator),
        concrete_creator_(concrete_creator) {}
};

/**
 * Prototype
 * AGPI(0,1) & CI(0,1)
 */
class Prototype : public Pattern {
 public:
  size_t client_;
  size_t prototype_;
  size_t concrete_prototype_;
  size_t concrete_prototype2_;

  Prototype(size_t client, size_t prototype, size_t concrete_prototype,
            size_t concrete_prototype2)
      : client_(client),
        prototype_(prototype),
        concrete_prototype_(concrete_prototype),
        concrete_prototype2_(concrete_prototype2) {}
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Singleton : public Pattern {
 public:
  size_t singleton_;

  Singleton(size_t singleton) : singleton_(singleton) {}
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class ResponsibilityChain : public Pattern {
 public:
  size_t handler_;
  size_t concrete_handler1_;
  size_t concrete_handler2_;

  ResponsibilityChain(size_t handler, size_t concrete_handler1,
                      size_t concrete_handler2)
      : handler_(handler),
        concrete_handler1_(concrete_handler1),
        concrete_handler2_(concrete_handler2) {}
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Command : public Pattern {
 public:
  size_t invoker_;
  size_t command_;
  size_t concrete_command_;
  size_t receiver_;

  Command(size_t invoker, size_t command, size_t concrete_command,
          size_t receiver)
      : invoker_(invoker),
        command_(command),
        concrete_command_(concrete_command),
        receiver_(receiver) {}
};

/**
 * IAGG(0,1) & CI(0,1) & IPD
 */
class Interpreter : public Pattern {
 public:
  size_t abstract_expr_;
  size_t terminal_expr_;
  size_t nonterminal_expr_;

  Interpreter(size_t abstract_expr, size_t terminal_expr,
              size_t nonterminal_expr)
      : abstract_expr_(abstract_expr),
        terminal_expr_(terminal_expr),
        nonterminal_expr_(nonterminal_expr) {}
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Iterator : public Pattern {
 public:
  size_t iterator_;
  size_t concrete_iterator_;
  size_t aggregate_;
  size_t concrete_aggregate_;

  Iterator(size_t iterator, size_t concrete_iterator, size_t aggregate,
           size_t concrete_aggregate)
      : iterator_(iterator),
        concrete_iterator_(concrete_iterator),
        aggregate_(aggregate),
        concrete_aggregate_(concrete_aggregate) {}
};

/**
 * IPAS(0,1) & ICA(0,1) & CI
 */
class Mediator : public Pattern {
 public:
  size_t mediator_;
  size_t concrete_mediator_;
  size_t colleague_;
  size_t concrete_colleague1_;
  size_t concrete_colleague2_;

  Mediator(size_t mediator, size_t concrete_mediator, size_t colleague,
           size_t concrete_colleague1, size_t concrete_colleague2)
      : mediator_(mediator),
        concrete_mediator_(concrete_mediator),
        colleague_(colleague),
        concrete_colleague1_(concrete_colleague1),
        concrete_colleague2_(concrete_colleague2) {}
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Memento : public Pattern {
 public:
  size_t memento_;
  size_t caretaker_;
  size_t originator_;

  Memento(size_t memento, size_t caretaker, size_t originator)
      : memento_(memento), caretaker_(caretaker), originator_(originator) {}
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Observer : public Pattern {
 public:
  size_t subject_;
  size_t concrete_subject_;
  size_t observer_;
  size_t concrete_observer_;

  Observer(size_t subject, size_t concrete_subject, size_t observer,
           size_t concrete_observer)
      : subject_(subject),
        concrete_subject_(concrete_subject),
        observer_(observer),
        concrete_observer_(concrete_observer) {}
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class State : public Pattern {
 public:
  size_t context_;
  size_t state_;
  size_t concrete_state1_;
  size_t concrete_state2_;

  State(size_t context, size_t state, size_t concrete_state1,
        size_t concrete_state2)
      : context_(context),
        state_(state),
        concrete_state1_(concrete_state1),
        concrete_state2_(concrete_state2) {}
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Strategy : public Pattern {
 public:
  size_t context_;
  size_t strategy_;
  size_t concrete_strategy1_;
  size_t concrete_strategy2_;

  Strategy(size_t context, size_t strategy, size_t concrete_strategy1,
           size_t concrete_strategy2)
      : context_(context),
        strategy_(strategy),
        concrete_strategy1_(concrete_strategy1),
        concrete_strategy2_(concrete_strategy2) {}
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Template : public Pattern {
 public:
  size_t abstract_;
  size_t concrete1_;
  size_t concrete2_;

  Template(size_t abstract, size_t concrete1, size_t concrete2)
      : abstract_(abstract), concrete1_(concrete1), concrete2_(concrete2) {}
};

class Visitor : public Pattern {
 public:
  size_t element;
  size_t visitor;
  size_t concrete_elem;
  size_t concrete_visitor;

  Node *object_struct;

  Visitor(size_t e, size_t v, size_t ce, size_t cv)
      : element(e), visitor(v), concrete_elem(ce), concrete_visitor(cv) {}
};

#endif  // !DPDT_PATTERN_H
