#ifndef DPDT_SFM_H
#define DPDT_SFM_H

#include <vector>

#include "gcdr.hpp"
#include "sub_pattern.hpp"

class SFM {
public:
};

class Proxy : public SFM {
    // CI && IASS   CI && ICA
    enum Type { RefSubject, RefRealSubject } type;

    // Q: Why not Graph/size_t/...?
    // A: On this level(Behavorial Analysis and further), we care nothing but
    // Node, Method (signature), and things within Graph. And, A pointer to Node
    // is much more safe and robust in terms of invalid indication.
    Node *subject;
    Node *real_subject;
    Node *proxy;
    Method *subject_request;
    Method *real_subject_request;
    Method *proxy_request;
};

#endif  // !DPDT_SFM_H
