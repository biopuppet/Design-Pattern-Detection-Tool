#ifndef DPDT_SUB_PATTERN_H
#define DPDT_SUB_PATTERN_H

#include <string>

#include "graph.hpp"

enum SubPatternType {
#define SUBPATTERN(U, L) SPT_##U,
#include "subpattern.def"
  SPT_NUM,
};

/**
 * SubPattern is a light-weight const Graph.
 * Keep graph interfaces to interact with SrcGraph.
 */
class SubPattern : public Graph<size_t> {
  SubPatternType type_;

 public:
  SubPattern(SubPatternType type, size_t size)
      : Graph<size_t>(size, R_NONE), type_(type) {}

  SubPattern(const SubPattern &) = delete;
  SubPattern &operator=(const SubPattern &) = delete;

  SubPatternType type() const { return type_; }

  const char *name() const {
    switch (type_) {
#define SUBPATTERN(U, L) \
  case SPT_##U:          \
    return #U;
#include "subpattern.def"
      default:
        break;
    }
    return nullptr;
  }

  static const char *name(size_t type) {
    switch (type) {
#define SUBPATTERN(U, L) \
  case SPT_##U:          \
    return #U;
#include "subpattern.def"
      default:
        break;
    }
    return nullptr;
  }

  // This is quite ugly, yet efficient.
  void add(size_t u, size_t v, size_t r) { edge(u, v) |= r; }

  void addInheritance(size_t u, size_t v) { edge(u, v) |= R_INH; }

  void addAssociation(size_t u, size_t v) { edge(u, v) |= R_ASS; }

  void addAggregation(size_t u, size_t v) { edge(u, v) |= R_AGG; }

  void addDependency(size_t u, size_t v) { edge(u, v) |= R_DEP; }

  bool hasInheritance(size_t u, size_t v) const override {
    return edge(u, v) & R_INH;
  }

  bool hasAssociation(size_t u, size_t v) const override {
    return edge(u, v) & R_ASS;
  }

  bool hasAggregation(size_t u, size_t v) const override {
    return edge(u, v) & R_AGG;
  }

  bool hasDependency(size_t u, size_t v) const override {
    return edge(u, v) & R_DEP;
  }
};

class ICA : public SubPattern {
 public:
  ICA() : SubPattern(SPT_ICA, 3) {
    addInheritance(1, 0);
    addAssociation(1, 2);
  }
};

class CI : public SubPattern {
 public:
  CI() : SubPattern(SPT_CI, 3) {
    addInheritance(1, 0);
    addInheritance(2, 0);
  }
};

class IPAS : public SubPattern {
 public:
  IPAS() : SubPattern(SPT_IPAS, 3) {
    addAssociation(0, 2);
    addInheritance(1, 0);
  }
};

class MLI : public SubPattern {
 public:
  MLI() : SubPattern(SPT_MLI, 3) {
    addInheritance(1, 0);
    addInheritance(2, 1);
  }
};

class ICD : public SubPattern {
 public:
  ICD() : SubPattern(SPT_ICD, 3) {
    addInheritance(1, 0);
    addDependency(1, 2);
  }
};

class DCI : public SubPattern {
 public:
  DCI() : SubPattern(SPT_DCI, 3) {
    addInheritance(1, 0);
    addDependency(2, 1);
  }
};

class AGPI : public SubPattern {
 public:
  AGPI() : SubPattern(SPT_AGPI, 3) {
    addAggregation(2, 0);
    addInheritance(1, 0);
  }
};

class ASPI : public SubPattern {
 public:
  ASPI() : SubPattern(SPT_ASPI, 3) {
    addAssociation(2, 0);
    addInheritance(1, 0);
  }
};

class DPI : public SubPattern {
 public:
  DPI() : SubPattern(SPT_DPI, 3) {
    addDependency(2, 0);
    addInheritance(1, 0);
  }
};

#endif  // !DPDT_SUB_PATTERN_H
