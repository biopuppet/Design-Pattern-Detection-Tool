#ifndef DPDT_PATTERN_H
#define DPDT_PATTERN_H

#include <ostream>

#include "gcdr.hpp"

enum PatternType {
#define PATTERN(x, c) PT_##x,
#include "pattern.def"
};

class Pattern {
public:
};

// Q: Why not Graph/size_t/...?
// A: On this level(Behavorial Analysis and further), we care nothing but
// Node, Method (signature), and things within Graph. And, A pointer to Node
// is much more safe and robust in terms of invalid indication.
class Proxy : public Pattern {
public:
    Node &subject;
    Node &real_subject;
    Node &proxy;

    // CI && IASS   CI && ICA
    enum Type { RefSubject, RefRealSubject } type;

    Method *subject_request;
    Method *real_subject_request;
    Method *proxy_request;

    Proxy(Node &s, Node &rs, Node &p, Type t)
        : subject(s), real_subject(rs), proxy(p), type(t) {}

    friend std::ostream &operator<<(std::ostream &os, const Proxy &p) {
        return os << "Proxy<" << p.subject.name() << ", "
                  << p.real_subject.name() << ", " << p.proxy.name() << ">";
    }
};

class Composite : public Pattern {
public:
    Node &component;
    Node &composite;
    Node &leaf;

    Method *operation;
    Method *add;     // optional
    Method *remove;  // optional

    Composite(Node &s, Node &rs, Node &p)
        : component(s), composite(rs), leaf(p) {}

    friend std::ostream &operator<<(std::ostream &os, const Composite &p) {
        return os << "Composite<" << p.component.name() << ", "
                  << p.composite.name() << ", " << p.leaf.name() << ">";
    }
};

class Adapter : public Pattern {
public:
    Node &target;
    Node &adapter;
    Node &adaptee;

    Method *target_request;
    Method *adapter_request;
    Method *adaptee_specific_request;

    Adapter(Node &target, Node &adapter, Node &adaptee)
        : target(target), adapter(adapter), adaptee(adaptee) {}
};

class Decorator : public Pattern {
public:
    Node &component;
    Node &concrete_component;
    Node &decorator;
    Node &concrete_decorator;

    Method *operation;

    Decorator(Node &component,
              Node &concrete_component,
              Node &decorator,
              Node &concrete_decorator)
        : component(component), concrete_component(concrete_component),
          decorator(decorator), concrete_decorator(concrete_decorator) {}
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
};

/**
 * ICD(0,1) & ICD(0,1) & ICD(0,1)
 */
class Facade : public Pattern {
public:
    Node &m_facade;
    Node &m_subsystem1;
    Node &m_subsystem2;
    Node &m_subsystem3;

    Facade(Node &facade, Node &subsystem1, Node &subsystem2, Node &subsystem3)
        : m_facade(facade), m_subsystem1(subsystem1), m_subsystem2(subsystem2),
          m_subsystem3(subsystem3) {}
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
};

class Visitor : public Pattern {
public:
    Node &element;
    Node &visitor;
    Node &concrete_elem;
    Node &concrete_visitor;

    Node *object_struct;

    Visitor(Node &e, Node &v, Node &ce, Node &cv, Node *os = nullptr)
        : element(e), visitor(v), concrete_elem(ce), concrete_visitor(cv),
          object_struct(os) {}
};

#endif  // !DPDT_PATTERN_H
