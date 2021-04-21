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
    Node &m_target;
    Node &m_adapter;
    Node &m_adaptee;

    Method *m_target_request;
    Method *m_adapter_request;
    Method *m_adaptee_specific_request;

    Adapter(Node &target, Node &adapter, Node &adaptee)
        : m_target(target), m_adapter(adapter), m_adaptee(adaptee) {}

    bool behavioral_check() const override;

    void print() const override {
        printf("Adapter<%s, %s, %s>\n", m_target.name(), m_adapter.name(),
               m_adaptee.name());
    }
};

/**
 *
 */
class Proxy : public Pattern {
public:
    Node &m_subject;
    Node &m_real_subject;
    Node &m_proxy;

    // CI && IASS   CI && ICA
    enum Type { RefSubject, RefRealSubject } m_type;

    Proxy(Node &s, Node &rs, Node &p, Type t)
        : m_subject(s), m_real_subject(rs), m_proxy(p), m_type(t) {}

    friend std::ostream &operator<<(std::ostream &os, const Proxy &p) {
        return os << "Proxy<" << p.m_subject.name() << ", "
                  << p.m_real_subject.name() << ", " << p.m_proxy.name() << ">";
    }

    void print() const override {
        printf("Proxy<%s, %s, %s>\n", m_subject.name(), m_real_subject.name(),
               m_proxy.name());
    }

    bool behavioral_check() const override;
};

/**
 *
 */
class Composite : public Pattern {
public:
    Node &m_component;
    Node &m_composite;
    Node &m_leaf;

    Method *operation;
    Method *add;     // optional
    Method *remove;  // optional

    Composite(Node &component, Node &composite, Node &leaf)
        : m_component(component), m_composite(composite), m_leaf(leaf) {}

    friend std::ostream &operator<<(std::ostream &os, const Composite &p) {
        return os << "Composite<" << p.m_component.name() << ", "
                  << p.m_composite.name() << ", " << p.m_leaf.name() << ">";
    }

    void print() const override {
        printf("Composite<%s, %s, %s>\n", m_component.name(),
               m_composite.name(), m_leaf.name());
    }

    bool behavioral_check() const override;
};

/**
 *
 */
class Decorator : public Pattern {
public:
    Node &m_component;
    Node &m_concrete_component;
    Node &m_decorator;
    Node &m_concrete_decorator;

    Method *operation;

    Decorator(Node &component,
              Node &concrete_component,
              Node &decorator,
              Node &concrete_decorator)
        : m_component(component), m_concrete_component(concrete_component),
          m_decorator(decorator), m_concrete_decorator(concrete_decorator) {}

    void print() const override {
        printf("Decorator<%s, %s, %s, %s>\n", m_component.name(),
               m_concrete_component.name(), m_decorator.name(),
               m_concrete_decorator.name());
    }

    bool behavioral_check() const override;
};

/**
 * IPAG(2) & CI(0)
 */
class Bridge : public Pattern {
public:
    Node &m_abstraction;
    Node &m_refined_abstraction;
    Node &m_implementor;
    Node &m_concrete_implementor1;
    Node &m_concrete_implementor2;

    Bridge(Node &abstraction,
           Node &refined_abstraction,
           Node &implementor,
           Node &concrete_implementor1,
           Node &concrete_implementor2)
        : m_abstraction(abstraction),
          m_refined_abstraction(refined_abstraction),
          m_implementor(implementor),
          m_concrete_implementor1(concrete_implementor1),
          m_concrete_implementor2(concrete_implementor2) {}

    void print() const override {
        printf("Bridge<%s, %s, %s, %s, %s>\n", m_abstraction.name(),
               m_refined_abstraction.name(), m_implementor.name(),
               m_concrete_implementor1.name(), m_concrete_implementor2.name());
    }

    bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & CI(0,1)
 */
class Flyweight : public Pattern {
public:
    Node &m_factory;
    Node &m_flyweight;
    Node &m_concrete_flyweight;
    Node &m_unshared_concrete_flyweight;

    Method *operation;

    Flyweight(Node &factory,
              Node &flyweight,
              Node &concrete_flyweight,
              Node &unshared_concrete_flyweight)
        : m_factory(factory), m_flyweight(flyweight),
          m_concrete_flyweight(concrete_flyweight),
          m_unshared_concrete_flyweight(unshared_concrete_flyweight) {}

    void print() const override {
        printf("Flyweight<%s, %s, %s, %s>\n", m_factory.name(),
               m_flyweight.name(), m_concrete_flyweight.name(),
               m_unshared_concrete_flyweight.name());
    }

    bool behavioral_check() const override;
};

/**
 * ICD(0,1) & ICD(0,1) & ICD(0,1)
 */
class Facade : public Pattern {
public:
    Node &m_facade;
    Node &m_concrete_facade;
    Node &m_subsystem1;
    Node &m_subsystem2;
    Node *m_subsystem3;

    Facade(Node &facade,
           Node &concrete_facade,
           Node &subsystem1,
           Node &subsystem2,
           Node *subsystem3 = nullptr)
        : m_facade(facade), m_concrete_facade(concrete_facade),
          m_subsystem1(subsystem1), m_subsystem2(subsystem2),
          m_subsystem3(subsystem3) {}

    void print() const override {
        printf("Facade<%s, %s, %s, %s>\n", m_facade.name(),
               m_concrete_facade.name(), m_subsystem1.name(),
               m_subsystem2.name());
    }

    bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Builder : public Pattern {
public:
    Node &m_builder;
    Node &m_concrete_builder;
    Node &m_director;
    Node &m_product;

    Builder(Node &builder,
            Node &concrete_builder,
            Node &director,
            Node &product)
        : m_builder(builder), m_concrete_builder(concrete_builder),
          m_director(director), m_product(product) {}

    void print() const override {
        printf("Builder<%s, %s, %s, %s>\n", m_builder.name(),
               m_concrete_builder.name(), m_director.name(), m_product.name());
    }

    bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & CI(0,1)
 */
class Prototype : public Pattern {
public:
    Node &m_client;
    Node &m_prototype;
    Node &m_concrete_prototype;
    Node &m_concrete_prototype2;

    Prototype(Node &client,
              Node &prototype,
              Node &concrete_prototype,
              Node &concrete_prototype2)
        : m_client(client), m_prototype(prototype),
          m_concrete_prototype(concrete_prototype),
          m_concrete_prototype2(concrete_prototype2) {}

    void print() const override {
        printf("Prototype<%s, %s, %s, %s>\n", m_client.name(),
               m_prototype.name(), m_concrete_prototype.name(),
               m_concrete_prototype2.name());
    }

    bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class Singleton : public Pattern {
public:
    Node &m_singleton;

    Singleton(Node &singleton) : m_singleton(singleton) {}

    void print() const override {
        printf("Singleton<%s>\n", m_singleton.name());
    }

    bool behavioral_check() const override;
};

/**
 * AGPI(0,1) & ICA(0,1)
 */
class ResponsibilityChain : public Pattern {
public:
    Node &m_handler;
    Node &m_concrete_handler1;
    Node &m_concrete_handler2;

    ResponsibilityChain(Node &handler,
                        Node &concrete_handler1,
                        Node &concrete_handler2)
        : m_handler(handler), m_concrete_handler1(concrete_handler1),
          m_concrete_handler2(concrete_handler2) {}

    void print() const override {
        printf("ResponsibilityChain<%s, %s, %s>\n", m_handler.name(),
               m_concrete_handler1.name(), m_concrete_handler2.name());
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
