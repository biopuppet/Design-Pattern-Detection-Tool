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

    // SubPattern(const G) {
        // g = new GCDR(gcdr);
    // }

    virtual ~SubPattern() {
    }

    const GCDR &gcdr() const {
        return *g; 
    };

    GCDR &gcdr() {
        return *g; 
    };

    virtual const SubPatternType type() const {
        return SubPatternType::SPT_NONE;
    }

    static SubPattern *createSubPattern(const SubPattern &src) {
        switch (src.type())
        {
        case SPT_ICA:
            return new ICA(src);
        case SPT_CI:
            return new CI(src);
        case SPT_NONE:
        default:
            return new SubPattern(src);
        }
    }
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
    
    const SubPatternType type() const override {
        return SubPatternType::SPT_ICA;
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
    
    const SubPatternType type() const override {
        return SubPatternType::SPT_CI;
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
    
    const SubPatternType type() const override {
        return SubPatternType::SPT_IAGG;
    }
};


class SASS : public SubPattern {
public:
    SASS() : SubPattern(1, "SASS") {
        add_edge(0, 0, Relation::Association, *g);
    }
    
    const SubPatternType type() const override {
        return SubPatternType::SPT_SASS;
    }
};

#endif  // !DPDT_SUB_PATTERN_H
