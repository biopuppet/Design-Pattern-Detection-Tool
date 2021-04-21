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
