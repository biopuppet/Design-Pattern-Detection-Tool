#ifndef DPDT_PATTERN_H
#define DPDT_PATTERN_H

#include "gcdr.hpp"

enum PatternType {
#define PATTERN(x) PT_##x,
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

    Proxy(Node &s,
          Node &rs,
          Node &p,
          Type t,
          Method *sr = nullptr,
          Method *rsr = nullptr,
          Method *pr = nullptr)
        : subject(s), real_subject(rs), proxy(p), type(t), subject_request(sr),
          real_subject_request(rsr), proxy_request(pr) {}
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
        : m_factory(factory),
          m_flyweight(flyweight),
          m_concrete_flyweight(concrete_flyweight),
          m_unshared_concrete_flyweight(unshared_concrete_flyweight) {}

    Flyweight(Graph &g, size_t factory,
           size_t flyweight,
           size_t concrete_flyweight,
           size_t unshared_concrete_flyweight)
        : Flyweight(g[factory], g[flyweight], g[concrete_flyweight], g[unshared_concrete_flyweight]) {}
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
