#ifndef DPDT_SUB_PATTERN_H
#define DPDT_SUB_PATTERN_H

#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>

#include "gcdr.hpp"

using namespace boost;

class SubPattern {
public:
    const std::string name;

    SubPattern(const std::string &n) : name(n) {}
    SubPattern(const char *n) : name(n) {}
    virtual ~SubPattern() {}

    virtual const GCDR &gcdr() const = 0;
};

class ICA : public SubPattern {
public:
    GCDR g{3};
    ICA() : SubPattern("ICA") {
        add_edge(1, 0, Relation::Inheritance, g);
        add_edge(1, 2, Relation::Association, g);
    }

    virtual const GCDR &gcdr() const override {
        return g;
    }
};


class CI : public SubPattern {
public:
    GCDR g{3};
    CI() : SubPattern("CI") {
        add_edge(1, 0, Relation::Inheritance, g);
        add_edge(2, 0, Relation::Inheritance, g);
    }
    
    virtual const GCDR &gcdr() const override {
        return g;
    }
};


class IAGG : public SubPattern {
public:
    GCDR g{2};
    IAGG() : SubPattern("IAGG") {
        add_edge(1, 0, Relation::Inheritance, g);
        add_edge(0, 1, Relation::Aggregation, g);
    }
    
    virtual const GCDR &gcdr() const {
        return g;
    }
};


class SASS : public SubPattern {
public:
    GCDR g{1};
    SASS() : SubPattern("SASS") {
        add_edge(0, 0, Relation::Association, g);
    }
    
    virtual const GCDR &gcdr() const {
        return g;
    }
};

#endif  // !DPDT_SUB_PATTERN_H
