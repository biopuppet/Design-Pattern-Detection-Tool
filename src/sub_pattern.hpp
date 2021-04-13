#ifndef DPDT_SUB_PATTERN_H
#define DPDT_SUB_PATTERN_H

#include "gcdr.hpp"

enum SubPatternType {
    SPT_NONE = -1,
    SPT_ICA = 0,
    SPT_CI,
    SPT_IAGG,
    SPT_IPAG,
    SPT_MLI,
    SPT_IASS,
    SPT_SAGG,
    SPT_IIAGG,
    SPT_SASS,
    SPT_ICD,
    SPT_DCI,
    SPT_IPAS,
    SPT_AGPI,
    SPT_IPD,
    SPT_DPI,
    SPT_NUM,
};

class SubPattern {
public:
    const std::string name;
    Graph g;

    SubPattern(const char *s, size_t n) : name(s), g(n) {}

    virtual ~SubPattern() {}

    const Graph &gcdr() const { return g; }

    Graph &gcdr() { return g; }

    void add(size_t u, size_t v, const size_t r) {
        auto &e = g.edge(u, v);
        if (r % e)
            return;
        e = r;
    }

    virtual const SubPatternType type() const = 0;
};

class ICA : public SubPattern {
public:
    ICA() : SubPattern("ICA", 3) {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(1, 2) = Relation::Association;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_ICA;
    }
};

class CI : public SubPattern {
public:
    CI() : SubPattern("CI", 3) {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(2, 0) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_CI;
    }
};

class IAGG : public SubPattern {
public:
    IAGG() : SubPattern("IAGG", 2) {
        g.edge(0, 1) = Relation::Aggregation;
        g.edge(1, 0) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IAGG;
    }

};

class SASS : public SubPattern {
public:
    SASS() : SubPattern("SASS", 1) { g.edge(0, 0) = Relation::Association; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_SASS;
    }

};

#endif  // !DPDT_SUB_PATTERN_H
