#ifndef DPDT_PATTERN_H
#define DPDT_PATTERN_H

#include <iostream>

#include "JavaParserBaseListener.h"
#include "graph.hpp"

class DpdtJavaBehavioralListener : public JavaParserBaseListener {
 public:
  DpdtJavaBehavioralListener(std::vector<Attribute *> &attrs) : attrs_(attrs) {}
  void enterExpression(JavaParser::ExpressionContext * /*ctx*/) override;

  std::vector<Attribute *> &attrs_;
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
#if 0

/**
 *
 */
class Composite : public Pattern {
 public:
  size_t component_;
  size_t composite_;
  size_t leaf_;

  Method *operation;
  Method *add;     // optional
  Method *remove;  // optional

  Composite(size_t component, size_t composite, size_t leaf)
      : component_(component), composite_(composite), leaf_(leaf) {}

  void print() const {
    printf("Composite<%s, %s, %s>\n", component_.name(), composite_.name(),
           leaf_.name());
  }

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

  Method *operation;

  Decorator(size_t component, size_t concrete_component, size_t decorator,
            size_t concrete_decorator)
      : component_(component),
        concrete_component_(concrete_component),
        decorator_(decorator),
        concrete_decorator_(concrete_decorator) {}

  void print() const {
    printf("Decorator<%s, %s, %s, %s>\n", component_.name(),
           concrete_component_.name(), decorator_.name(),
           concrete_decorator_.name());
  }

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

  void print() const {
    printf("Bridge<%s, %s, %s, %s, %s>\n", abstraction_.name(),
           refined_abstraction_.name(), implementor_.name(),
           concrete_implementor1_.name(), concrete_implementor2_.name());
  }

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

  void print() const {
    printf("Flyweight<%s, %s, %s, %s>\n", factory_.name(), flyweight_.name(),
           concrete_flyweight_.name(), unshared_concrete_flyweight_.name());
  }

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

  void print() const {
    printf("Facade<%s, ", facade_.name());
    printf("Subsystems<%s", subsystems_[0]->name());
    for (size_t i = 1; i < subsystems_.size(); ++i) {
      printf(", %s", subsystems_[i]->name());
    }
    printf(">>\n");
  }

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

  AbstractFactory(size_t abstract_factory, size_t concrete_factory, size_t product,
                  size_t concrete_product1, size_t concrete_product2)
      : abstract_factory_(abstract_factory),
        concrete_factory_(concrete_factory),
        product_(product),
        concrete_product1_(concrete_product1),
        concrete_product2_(concrete_product2) {}

  void print() const {
    printf("AbstractFactory<%s, %s, %s, %s, %s>\n", abstract_factory_.name(),
           concrete_factory_.name(), product_.name(), concrete_product1_.name(),
           concrete_product2_.name());
  }

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

  Builder(size_t builder, size_t concrete_builder, size_t director, size_t product)
      : builder_(builder),
        concrete_builder_(concrete_builder),
        director_(director),
        product_(product) {}

  void print() const {
    printf("Builder<%s, %s, %s, %s>\n", builder_.name(),
           concrete_builder_.name(), director_.name(), product_.name());
  }

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

  void print() const {
    printf("Factory<%s, %s, %s, %s>\n", product_.name(),
           concrete_product_.name(), creator_.name(), concrete_creator_.name());
  }

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

  void print() const {
    printf("Prototype<%s, %s, %s, %s>\n", client_.name(), prototype_.name(),
           concrete_prototype_.name(), concrete_prototype2_.name());
  }

};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Singleton : public Pattern {
 public:
  size_t singleton_;

  Singleton(size_t singleton) : singleton_(singleton) {}

  void print() const { printf("Singleton<%s>\n", singleton_.name()); }

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

  void print() const {
    printf("ResponsibilityChain<%s, %s, %s>\n", handler_.name(),
           concrete_handler1_.name(), concrete_handler2_.name());
  }

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

  Command(size_t invoker, size_t command, size_t concrete_command, size_t receiver)
      : invoker_(invoker),
        command_(command),
        concrete_command_(concrete_command),
        receiver_(receiver) {}

  void print() const {
    printf("Command<%s, %s, %s, %s>\n", invoker_.name(), command_.name(),
           concrete_command_.name(), receiver_.name());
  }

};

/**
 * IAGG(0,1) & CI(0,1) & IPD
 */
class Interpreter : public Pattern {
 public:
  size_t content_;
  size_t abstract_expr_;
  size_t terminal_expr_;
  size_t nonterminal_expr_;

  Interpreter(size_t content, size_t abstract_expr, size_t terminal_expr,
              size_t nonterminal_expr)
      : content_(content),
        abstract_expr_(abstract_expr),
        terminal_expr_(terminal_expr),
        nonterminal_expr_(nonterminal_expr) {}

  void print() const {
    printf("Interpreter<%s, %s, %s, %s>\n", content_.name(),
           abstract_expr_.name(), terminal_expr_.name(),
           nonterminal_expr_.name());
  }

};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Iterator : public Pattern {
 public:
  size_t iterator_;
  size_t concrete_iterator_;
  size_t aggregate_;
  size_t aggregate_iterator_;

  Iterator(size_t iterator, size_t concrete_iterator, size_t aggregate,
           size_t aggregate_iterator)
      : iterator_(iterator),
        concrete_iterator_(concrete_iterator),
        aggregate_(aggregate),
        aggregate_iterator_(aggregate_iterator) {}

  void print() const {
    printf("Iterator<%s, %s, %s, %s>\n", iterator_.name(),
           concrete_iterator_.name(), aggregate_.name(),
           aggregate_iterator_.name());
  }

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

  void print() const {
    printf("Mediator<%s, %s, %s, %s, %s>\n", mediator_.name(),
           concrete_mediator_.name(), colleague_.name(),
           concrete_colleague1_.name(), concrete_colleague2_.name());
  }

};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Memento : public Pattern {
 public:
  size_t memento_;
  size_t memento_imp_;
  size_t caretaker_;
  size_t originator_;

  Memento(size_t memento, size_t memento_imp, size_t caretaker, size_t originator)
      : memento_(memento),
        memento_imp_(memento_imp),
        caretaker_(caretaker),
        originator_(originator) {}

  void print() const {
    printf("Memento<%s, %s, %s, %s>\n", memento_.name(), memento_imp_.name(),
           caretaker_.name(), originator_.name());
  }

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

  void print() const {
    printf("Observer<%s, %s, %s, %s>\n", subject_.name(),
           concrete_subject_.name(), observer_.name(),
           concrete_observer_.name());
  }

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

  void print() const {
    printf("State<%s, %s, %s, %s>\n", context_.name(), state_.name(),
           concrete_state1_.name(), concrete_state2_.name());
  }

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

  void print() const {
    printf("Strategy<%s, %s, %s, %s>\n", context_.name(), strategy_.name(),
           concrete_strategy1_.name(), concrete_strategy2_.name());
  }

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

  void print() const {
    printf("Template<%s, %s, %s>\n", abstract_.name(), concrete1_.name(),
           concrete2_.name());
  }

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


  void print() const {
    printf("Visitor<%s, %s, %s, %s>\n", element.name(), visitor.name(),
           concrete_elem.name(), concrete_visitor.name());
  }
};
#endif
#endif  // !DPDT_PATTERN_H
