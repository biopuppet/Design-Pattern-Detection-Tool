#ifndef DPDT_SUB_PATTERN_H
#define DPDT_SUB_PATTERN_H

#include "gcdr.hpp"

enum SubPatternType {
    SPT_NONE = -1,
    SPT_ICA = 0,
    SPT_CI,
    SPT_IAGG,
    SPT_IPAG,
    SPT_IPAS,
    SPT_SASS,
    SPT_MLI,
    SPT_IIAGG,
    SPT_IASS,
    SPT_ICD,
    SPT_DCI,
    SPT_SAGG,
    SPT_AGPI,
    SPT_IPD,
    SPT_DPI,
    SPT_NUM,
};

class SubPattern {
public:
    const std::string n;
    Graph g;

    SubPattern(const char *name, size_t size) : n(name), g(size) {}

    const char *name() const { return n.c_str(); }

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
        g.edge(1, 0) = Relation::Aggregation;
        g.edge(1, 0) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IAGG;
    }
};

class IPAG : public SubPattern {
public:
    IPAG() : SubPattern("IPAG", 3) {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(0, 2) = Relation::Aggregation;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IPAG;
    }
};

class IPAS : public SubPattern {
public:
    IPAS() : SubPattern("IPAS", 3) {
        g.edge(0, 2) = Relation::Association;
        g.edge(1, 0) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IPAS;
    }
};

class SASS : public SubPattern {
public:
    SASS() : SubPattern("SASS", 1) { g.edge(0, 0) = Relation::Association; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_SASS;
    }
};

class MLI : public SubPattern {
public:
    MLI() : SubPattern("MLI", 3) {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(2, 1) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_MLI;
    }
};

class IIAGG : public SubPattern {
public:
    IIAGG() : SubPattern("IIAGG", 3) {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(2, 1) = Relation::Inheritance;
        g.edge(2, 0) = Relation::Aggregation;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IIAGG;
    }
};

class IASS : public SubPattern {
public:
    IASS() : SubPattern("IASS", 2) {
        g.edge(1, 0) = Relation::Inheritance * Relation::Association;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IASS;
    }
};

class ICD : public SubPattern {
public:
    ICD() : SubPattern("ICD", 3) {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(1, 2) = Relation::Dependency;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_ICD;
    }
};

class DCI : public SubPattern {
public:
    DCI() : SubPattern("DCI", 3) {
        g.edge(1, 0) = Relation::Inheritance;
        g.edge(2, 1) = Relation::Dependency;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_DCI;
    }
};

class SAGG : public SubPattern {
public:
    SAGG() : SubPattern("SAGG", 1) { g.edge(0, 0) = Relation::Aggregation; }

    const SubPatternType type() const override {
        return SubPatternType::SPT_SAGG;
    }
};

class AGPI : public SubPattern {
public:
    AGPI() : SubPattern("AGPI", 3) {
        g.edge(2, 0) = Relation::Aggregation;
        g.edge(1, 0) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_AGPI;
    }
};

class IPD : public SubPattern {
public:
    IPD() : SubPattern("IPD", 3) {
        g.edge(0, 2) = Relation::Dependency;
        g.edge(1, 0) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_IPD;
    }
};

class DPI : public SubPattern {
public:
    DPI() : SubPattern("DPI", 3) {
        g.edge(2, 0) = Relation::Dependency;
        g.edge(1, 0) = Relation::Inheritance;
    }

    const SubPatternType type() const override {
        return SubPatternType::SPT_DPI;
    }
};

#endif  // !DPDT_SUB_PATTERN_H
