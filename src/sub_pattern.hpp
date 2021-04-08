#ifndef DPDT_SUB_PATTERN_H
#define DPDT_SUB_PATTERN_H

#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>
#include <memory>

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

    SubPattern(const char *s) : name(s) {}

    virtual ~SubPattern() {}

    virtual const GCDR &gcdr() const = 0;

    virtual GCDR &gcdr() = 0;

    virtual const SubPatternType type() const = 0;

    static SubPattern *createSubPattern(const SubPattern &src);
};

class ICA : public SubPattern {
public:
    GCDR g{3};

    ICA() : SubPattern("ICA") {
        add_edge(0, 0, Relation::None, g);
        add_edge(0, 1, Relation::None, g);
        add_edge(0, 2, Relation::None, g);
        add_edge(1, 0, Relation::Inheritance, g);
        add_edge(1, 1, Relation::None, g);
        add_edge(1, 2, Relation::Association, g);
        add_edge(2, 0, Relation::None, g);
        add_edge(2, 1, Relation::None, g);
        add_edge(2, 2, Relation::None, g);
    }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_ICA;
    }
};

class CI : public SubPattern {
public:
    GCDR g{3};

    CI() : SubPattern("CI") {
        add_edge(0, 0, Relation::None, g);
        add_edge(0, 1, Relation::None, g);
        add_edge(0, 2, Relation::None, g);
        add_edge(1, 0, Relation::Inheritance, g);
        add_edge(1, 1, Relation::None, g);
        add_edge(1, 2, Relation::None, g);
        add_edge(2, 0, Relation::Inheritance, g);
        add_edge(2, 1, Relation::None, g);
        add_edge(2, 2, Relation::None, g);
    }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_CI;
    }
};

class IAGG : public SubPattern {
public:
    GCDR g{2};

    IAGG() : SubPattern("IAGG") {
        add_edge(0, 0, Relation::None, g);
        add_edge(0, 1, Relation::Aggregation, g);
        add_edge(1, 0, Relation::Inheritance, g);
        add_edge(1, 1, Relation::None, g);
    }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IAGG;
    }
};

class SASS : public SubPattern {
public:
    GCDR g{1};

    SASS() : SubPattern("SASS") { add_edge(0, 0, Relation::Association, g); }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_SASS;
    }
};

#endif  // !DPDT_SUB_PATTERN_H
