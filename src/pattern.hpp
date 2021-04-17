#ifndef DPDT_PATTERN_H
#define DPDT_PATTERN_H

#include "gcdr.hpp"

enum PatternType {
    PT_Adapter = 0,
    PT_Proxy,
    PT_Composite,
    PT_Decorator,
    PT_Bridge,
    PT_Flyweight,
    PT_Facade,
    PT_AbstractFactory,
    PT_Builder,
    PT_Factory,
    PT_Prototype,
    PT_Singleton,
    PT_CoR, // Chain of Responsibility
    PT_Command,
    PT_Interpreter,
    PT_Iterator,
    PT_Mediator,
    PT_Memento,
    PT_Observer,
    PT_State,
    PT_Strategy,
    PT_Template,
    PT_Visitor,
};

class Pattern {
public:
};

class Proxy : public Pattern {
public:
    // Q: Why not Graph/size_t/...?
    // A: On this level(Behavorial Analysis and further), we care nothing but
    // Node, Method (signature), and things within Graph. And, A pointer to Node
    // is much more safe and robust in terms of invalid indication.
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

class Adapter : public Pattern {
public:
    Node &target;
    Node &adapter;
    Node &adaptee;

    Method *target_request;
    Method *adapter_request;
    Method *adaptee_specific_request;

    Adapter(Node &target,
            Node &adapter,
            Node &adaptee,
            Method *tr = nullptr,
            Method *ar = nullptr,
            Method *asr = nullptr)
        : target(target), adapter(adapter), adaptee(adaptee),
          target_request(tr), adapter_request(ar),
          adaptee_specific_request(asr) {}
};

#endif  // !DPDT_PATTERN_H
