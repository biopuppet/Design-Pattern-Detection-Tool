#ifndef DPDT_SUB_PATTERN_H
#define DPDT_SUB_PATTERN_H

#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>
#include <memory>

#include "gcdr.hpp"

class SubPattern {
public:
    const std::string name;
    GCDR *g;

    SubPattern(size_t n, const std::string &s) : name(s) {
        g = new GCDR(n);
    }

    SubPattern(size_t n, const char *s) : name(s) {
        g = new GCDR(n);
    }

    SubPattern(const GCDR &gcdr) {
        g = new GCDR(gcdr);
    }

    virtual ~SubPattern() {
    }

    const GCDR &gcdr() const {
        return *g; 
    };
};

class ICA : public SubPattern {
public:
    ICA() : SubPattern(3, "ICA") {
        add_edge(0, 0, Relation::None, *g);
        add_edge(0, 1, Relation::None, *g);
        add_edge(0, 2, Relation::None, *g);
        add_edge(1, 0, Relation::Inheritance, *g);
        add_edge(1, 1, Relation::None, *g);
        add_edge(1, 2, Relation::Association, *g);
        add_edge(2, 0, Relation::None, *g);
        add_edge(2, 1, Relation::None, *g);
        add_edge(2, 2, Relation::None, *g);
    }
};


class CI : public SubPattern {
public:
    CI() : SubPattern(3, "CI") {
        add_edge(0, 0, Relation::None, *g);
        add_edge(0, 1, Relation::None, *g);
        add_edge(0, 2, Relation::None, *g);
        add_edge(1, 0, Relation::Inheritance, *g);
        add_edge(1, 1, Relation::None, *g);
        add_edge(1, 2, Relation::None, *g);
        add_edge(2, 0, Relation::Inheritance, *g);
        add_edge(2, 1, Relation::None, *g);
        add_edge(2, 2, Relation::None, *g);

    }
};


class IAGG : public SubPattern {
public:
    IAGG() : SubPattern(2, "IAGG") {
        add_edge(0, 0, Relation::None, *g);
        add_edge(0, 1, Relation::Aggregation, *g);
        add_edge(1, 0, Relation::Inheritance, *g);
        add_edge(1, 1, Relation::None, *g);
    }
};


class SASS : public SubPattern {
public:
    SASS() : SubPattern(1, "SASS") {
        add_edge(0, 0, Relation::Association, *g);
    }
};

#endif  // !DPDT_SUB_PATTERN_H
