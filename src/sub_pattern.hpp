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

    SubPattern(const char *s) : name(s) {}

    virtual ~SubPattern() {}

    virtual const GCDR &gcdr() const = 0;

    virtual GCDR &gcdr() = 0;

    virtual const SubPatternType type() const = 0;

    virtual void add(size_t u, size_t v, const size_t r) = 0;

    static SubPattern *createSubPattern(const SubPattern &src);
};

class ICA : public SubPattern {
    GCDR g{3};

public:
    ICA() : SubPattern("ICA") {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(1, 2) = Relation::Association;
    }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_ICA;
    }

    void add(size_t u, size_t v, const size_t r) override {
        auto &e = g.edge(u, v);
        if (r % e)
            return;
        e = r;
    }
};

class CI : public SubPattern {
    GCDR g{3};

public:
    CI() : SubPattern("CI") {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(2, 0) = Relation::Inheritance;
    }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_CI;
    }

    void add(size_t u, size_t v, const size_t r) override {
        auto &e = g.edge(u, v);
        if (r % e)
            return;
        e = r;
    }
};

class IAGG : public SubPattern {
    GCDR g{2};

public:
    IAGG() : SubPattern("IAGG") {
        g.edge(0, 1) = Relation::Aggregation;
        g.edge(1, 0) = Relation::Inheritance;
    }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IAGG;
    }

    void add(size_t u, size_t v, const size_t r) override {
        auto &e = g.edge(u, v);
        if (r % e)
            return;
        e = r;
    }
};

class SASS : public SubPattern {
    GCDR g{1};

public:
    SASS() : SubPattern("SASS") { g.edge(0, 0) = Relation::Association; }

    const GCDR &gcdr() const override { return g; }

    GCDR &gcdr() override { return g; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_SASS;
    }

    void add(size_t u, size_t v, const size_t r) override {
        auto &e = g.edge(u, v);
        if (r % e)
            return;
        e = r;
    }
};

#endif  // !DPDT_SUB_PATTERN_H
