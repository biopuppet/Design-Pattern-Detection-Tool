#ifndef DPDT_PATTERN_H
#define DPDT_PATTERN_H

#include <ostream>

#include "graph.hpp"

enum PatternType {
#define PATTERN(x, c) PT_##x,
#include "pattern.def"
};

class Pattern {
 public:
  virtual bool behavioral_check() const = 0;
  virtual void print() const = 0;
  virtual ~Pattern() {}
};

// Q: Why not Graph/size_t/...?
// A: On this level(Behavorial Analysis and further), we care nothing but
// Node, Method (signature), and things within Graph. And, A pointer to Node
// is much more safe and robust in terms of invalid indication.

/**
 *
 */
class Adapter : public Pattern {
 public:
  Node &target_;
  Node &adapter_;
  Node &adaptee_;

  Method *target_request_;
  Method *adapter_request_;
  Method *adaptee_specific_request_;

  Adapter(Node &target, Node &adapter, Node &adaptee)
      : target_(target), adapter_(adapter), adaptee_(adaptee) {}

  bool behavioral_check() const override;

  void print() const override {
    printf("Adapter<%s, %s, %s>\n", target_.name(), adapter_.name(),
           adaptee_.name());
  }
};

/**
 *
 */
class Proxy : public Pattern {
 public:
  Node &subject_;
  Node &real_subject_;
  Node &proxy_;

  // CI && IASS   CI && ICA
  enum Type { RefSubject, RefRealSubject } type_;

  Proxy(Node &s, Node &rs, Node &p, Type t)
      : subject_(s), real_subject_(rs), proxy_(p), type_(t) {}

  friend std::ostream &operator<<(std::ostream &os, const Proxy &p) {
    return os << "Proxy<" << p.subject_.name() << ", " << p.real_subject_.name()
              << ", " << p.proxy_.name() << ">";
  }

  void print() const override {
    printf("Proxy<%s, %s, %s>\n", subject_.name(), real_subject_.name(),
           proxy_.name());
  }

  bool behavioral_check() const override;
};

/**
 *
 */
class Composite : public Pattern {
 public:
  Node &component_;
  Node &composite_;
  Node &leaf_;

  Method *operation;
  Method *add;     // optional
  Method *remove;  // optional

  Composite(Node &component, Node &composite, Node &leaf)
      : component_(component), composite_(composite), leaf_(leaf) {}

  friend std::ostream &operator<<(std::ostream &os, const Composite &p) {
    return os << "Composite<" << p.component_.name() << ", "
              << p.composite_.name() << ", " << p.leaf_.name() << ">";
  }

  void print() const override {
    printf("Composite<%s, %s, %s>\n", component_.name(), composite_.name(),
           leaf_.name());
  }

  bool behavioral_check() const override;
};

/**
 *
 */
class Decorator : public Pattern {
 public:
  Node &component_;
  Node &concrete_component_;
  Node &decorator_;
  Node &concrete_decorator_;

  Method *operation;

  Decorator(Node &component, Node &concrete_component, Node &decorator,
            Node &concrete_decorator)
      : component_(component),
        concrete_component_(concrete_component),
        decorator_(decorator),
        concrete_decorator_(concrete_decorator) {}

  void print() const override {
    printf("Decorator<%s, %s, %s, %s>\n", component_.name(),
           concrete_component_.name(), decorator_.name(),
           concrete_decorator_.name());
  }

  bool behavioral_check() const override;
};

/**
 * IPAG(2) & CI(0)
 */
class Bridge : public Pattern {
 public:
  Node &abstraction_;
  Node &refined_abstraction_;
  Node &implementor_;
  Node &concrete_implementor1_;
  Node &concrete_implementor2_;

  Bridge(Node &abstraction, Node &refined_abstraction, Node &implementor,
         Node &concrete_implementor1, Node &concrete_implementor2)
      : abstraction_(abstraction),
        refined_abstraction_(refined_abstraction),
        implementor_(implementor),
        concrete_implementor1_(concrete_implementor1),
        concrete_implementor2_(concrete_implementor2) {}

  void print() const override {
    printf("Bridge<%s, %s, %s, %s, %s>\n", abstraction_.name(),
           refined_abstraction_.name(), implementor_.name(),
           concrete_implementor1_.name(), concrete_implementor2_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & CI(0,1)
 */
class Flyweight : public Pattern {
 public:
  Node &factory_;
  Node &flyweight_;
  Node &concrete_flyweight_;
  Node &unshared_concrete_flyweight_;

  Method *operation;

  Flyweight(Node &factory, Node &flyweight, Node &concrete_flyweight,
            Node &unshared_concrete_flyweight)
      : factory_(factory),
        flyweight_(flyweight),
        concrete_flyweight_(concrete_flyweight),
        unshared_concrete_flyweight_(unshared_concrete_flyweight) {}

  void print() const override {
    printf("Flyweight<%s, %s, %s, %s>\n", factory_.name(), flyweight_.name(),
           concrete_flyweight_.name(), unshared_concrete_flyweight_.name());
  }

  bool behavioral_check() const override;
};

/**
 * ICD(0,1) & ICD(0,1) & ICD(0,1)
 */
class Facade : public Pattern {
 public:
  Node &facade_;
  Node &concrete_facade_;
  Node &subsystem1_;
  Node &subsystem2_;
  Node *subsystem3_;

  Facade(Node &facade, Node &concrete_facade, Node &subsystem1,
         Node &subsystem2, Node *subsystem3 = nullptr)
      : facade_(facade),
        concrete_facade_(concrete_facade),
        subsystem1_(subsystem1),
        subsystem2_(subsystem2),
        subsystem3_(subsystem3) {}

  void print() const override {
    printf("Facade<%s, %s, %s, %s>\n", facade_.name(), concrete_facade_.name(),
           subsystem1_.name(), subsystem2_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Builder : public Pattern {
 public:
  Node &builder_;
  Node &concrete_builder_;
  Node &director_;
  Node &product_;

  Builder(Node &builder, Node &concrete_builder, Node &director, Node &product)
      : builder_(builder),
        concrete_builder_(concrete_builder),
        director_(director),
        product_(product) {}

  void print() const override {
    printf("Builder<%s, %s, %s, %s>\n", builder_.name(),
           concrete_builder_.name(), director_.name(), product_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & CI(0,1)
 */
class Prototype : public Pattern {
 public:
  Node &client_;
  Node &prototype_;
  Node &concrete_prototype_;
  Node &concrete_prototype2_;

  Prototype(Node &client, Node &prototype, Node &concrete_prototype,
            Node &concrete_prototype2)
      : client_(client),
        prototype_(prototype),
        concrete_prototype_(concrete_prototype),
        concrete_prototype2_(concrete_prototype2) {}

  void print() const override {
    printf("Prototype<%s, %s, %s, %s>\n", client_.name(), prototype_.name(),
           concrete_prototype_.name(), concrete_prototype2_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Singleton : public Pattern {
 public:
  Node &singleton_;

  Singleton(Node &singleton) : singleton_(singleton) {}

  void print() const override { printf("Singleton<%s>\n", singleton_.name()); }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class ResponsibilityChain : public Pattern {
 public:
  Node &handler_;
  Node &concrete_handler1_;
  Node &concrete_handler2_;

  ResponsibilityChain(Node &handler, Node &concrete_handler1,
                      Node &concrete_handler2)
      : handler_(handler),
        concrete_handler1_(concrete_handler1),
        concrete_handler2_(concrete_handler2) {}

  void print() const override {
    printf("ResponsibilityChain<%s, %s, %s>\n", handler_.name(),
           concrete_handler1_.name(), concrete_handler2_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Command : public Pattern {
 public:
  Node &invoker_;
  Node &command_;
  Node &concrete_command_;
  Node &receiver_;

  Command(Node &invoker, Node &command, Node &concrete_command, Node &receiver)
      : invoker_(invoker),
        command_(command),
        concrete_command_(concrete_command),
        receiver_(receiver) {}

  void print() const override {
    printf("Command<%s, %s, %s, %s>\n", invoker_.name(), command_.name(),
           concrete_command_.name(), receiver_.name());
  }

  bool behavioral_check() const override;
};

/**
 * IAGG(0,1) & CI(0,1) & IPD
 */
class Interpreter : public Pattern {
 public:
  Node &content_;
  Node &abstract_expr_;
  Node &terminal_expr_;
  Node &nonterminal_expr_;

  Interpreter(Node &content, Node &abstract_expr, Node &terminal_expr,
              Node &nonterminal_expr)
      : content_(content),
        abstract_expr_(abstract_expr),
        terminal_expr_(terminal_expr),
        nonterminal_expr_(nonterminal_expr) {}

  void print() const override {
    printf("Interpreter<%s, %s, %s, %s>\n", content_.name(),
           abstract_expr_.name(), terminal_expr_.name(),
           nonterminal_expr_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Iterator : public Pattern {
 public:
  Node &iterator_;
  Node &concrete_iterator_;
  Node &aggregate_;
  Node &aggregate_iterator_;

  Iterator(Node &iterator, Node &concrete_iterator, Node &aggregate,
           Node &aggregate_iterator)
      : iterator_(iterator),
        concrete_iterator_(concrete_iterator),
        aggregate_(aggregate),
        aggregate_iterator_(aggregate_iterator) {}

  void print() const override {
    printf("Iterator<%s, %s, %s, %s>\n", iterator_.name(),
           concrete_iterator_.name(), aggregate_.name(),
           aggregate_iterator_.name());
  }

  bool behavioral_check() const override;
};

/**
 * IPAS(0,1) & ICA(0,1) & CI
 */
class Mediator : public Pattern {
 public:
  Node &mediator_;
  Node &concrete_mediator_;
  Node &colleague_;
  Node &concrete_colleague1_;
  Node &concrete_colleague2_;

  Mediator(Node &mediator, Node &concrete_mediator, Node &colleague,
           Node &concrete_colleague1, Node &concrete_colleague2)
      : mediator_(mediator),
        concrete_mediator_(concrete_mediator),
        colleague_(colleague),
        concrete_colleague1_(concrete_colleague1),
        concrete_colleague2_(concrete_colleague2) {}

  void print() const override {
    printf("Mediator<%s, %s, %s, %s, %s>\n", mediator_.name(),
           concrete_mediator_.name(), colleague_.name(),
           concrete_colleague1_.name(), concrete_colleague2_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Memento : public Pattern {
 public:
  Node &memento_;
  Node &memento_imp_;
  Node &caretaker_;
  Node &originator_;

  Memento(Node &memento, Node &memento_imp, Node &caretaker, Node &originator)
      : memento_(memento),
        memento_imp_(memento_imp),
        caretaker_(caretaker),
        originator_(originator) {}

  void print() const override {
    printf("Memento<%s, %s, %s, %s>\n", memento_.name(), memento_imp_.name(),
           caretaker_.name(), originator_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Observer : public Pattern {
 public:
  Node &subject_;
  Node &concrete_subject_;
  Node &observer_;
  Node &concrete_observer_;

  Observer(Node &subject, Node &concrete_subject, Node &observer,
           Node &concrete_observer)
      : subject_(subject),
        concrete_subject_(concrete_subject),
        observer_(observer),
        concrete_observer_(concrete_observer) {}

  void print() const override {
    printf("Observer<%s, %s, %s, %s>\n", subject_.name(),
           concrete_subject_.name(), observer_.name(),
           concrete_observer_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class State : public Pattern {
 public:
  Node &context_;
  Node &state_;
  Node &concrete_state1_;
  Node &concrete_state2_;

  State(Node &context, Node &state, Node &concrete_state1,
        Node &concrete_state2)
      : context_(context),
        state_(state),
        concrete_state1_(concrete_state1),
        concrete_state2_(concrete_state2) {}

  void print() const override {
    printf("State<%s, %s, %s, %s>\n", context_.name(), state_.name(),
           concrete_state1_.name(), concrete_state2_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Strategy : public Pattern {
 public:
  Node &context_;
  Node &strategy_;
  Node &concrete_strategy1_;
  Node &concrete_strategy2_;

  Strategy(Node &context, Node &strategy, Node &concrete_strategy1,
           Node &concrete_strategy2)
      : context_(context),
        strategy_(strategy),
        concrete_strategy1_(concrete_strategy1),
        concrete_strategy2_(concrete_strategy2) {}

  void print() const override {
    printf("Strategy<%s, %s, %s, %s>\n", context_.name(), strategy_.name(),
           concrete_strategy1_.name(), concrete_strategy2_.name());
  }

  bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & DPI(0,1)
 */
class Template : public Pattern {
 public:
  Node &abstract_;
  Node &concrete1_;
  Node &concrete2_;

  Template(Node &abstract, Node &concrete1, Node &concrete2)
      : abstract_(abstract), concrete1_(concrete1), concrete2_(concrete2) {}

  void print() const override {
    printf("Template<%s, %s, %s>\n", abstract_.name(), concrete1_.name(),
           concrete2_.name());
  }

  bool behavioral_check() const override;
};

class Visitor : public Pattern {
 public:
  Node &element;
  Node &visitor;
  Node &concrete_elem;
  Node &concrete_visitor;

  Node *object_struct;

  Visitor(Node &e, Node &v, Node &ce, Node &cv)
      : element(e), visitor(v), concrete_elem(ce), concrete_visitor(cv) {}

  bool behavioral_check() const override;

  void print() const override {
    printf("Visitor<%s, %s, %s, %s>\n", element.name(), visitor.name(),
           concrete_elem.name(), concrete_visitor.name());
  }
};

#endif  // !DPDT_PATTERN_H
