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
      : Graph<size_t>(size, Relation::None), type_(type) {
    switch (type) {
      case SPT_ICA:
        addInheritance(1, 0);
        addAssociation(1, 2);
        break;
      case SPT_CI:
        addInheritance(1, 0);
        addInheritance(2, 0);
        break;
      case SPT_IAGG:
        add(1, 0, Relation::Aggregation * Relation::Inheritance);
        break;
      case SPT_IPAG:
        addInheritance(1, 0);
        addAggregation(0, 2);
        break;
      case SPT_IPAS:
        addAssociation(0, 2);
        addInheritance(1, 0);
        break;
      case SPT_SASS:
        addAssociation(0, 0);
        break;
      case SPT_MLI:
        addInheritance(1, 0);
        addInheritance(2, 1);
        break;
      case SPT_IIAGG:
        addInheritance(1, 0);
        addInheritance(2, 1);
        addAggregation(2, 0);
        break;
      case SPT_IASS:
        add(1, 0, Relation::Inheritance * Relation::Association);
        break;
      case SPT_ICD:
        addInheritance(1, 0);
        addDependency(1, 2);
        break;
      case SPT_DCI:
        addInheritance(1, 0);
        addDependency(2, 1);
        break;
      case SPT_SAGG:
        addAggregation(0, 0);
        break;
      case SPT_AGPI:
        addAggregation(2, 0);
        addInheritance(1, 0);
        break;
      case SPT_ASPI:
        addAssociation(2, 0);
        addInheritance(1, 0);
        break;
      case SPT_IPD:
        addDependency(0, 2);
        addInheritance(1, 0);
        break;
      case SPT_DPI:
        addDependency(2, 0);
        addInheritance(1, 0);
        break;
      default:
        break;
    }
  }

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

  // This is quite ugly, yet efficient.
  void add(size_t u, size_t v, size_t r) { edge(u, v) *= r; }

  void addInheritance(size_t u, size_t v) {
    edge(u, v) *= Relation::Inheritance;
  }

  void addAssociation(size_t u, size_t v) {
    edge(u, v) *= Relation::Association;
  }

  void addAggregation(size_t u, size_t v) {
    edge(u, v) *= Relation::Aggregation;
  }

  void addDependency(size_t u, size_t v) { edge(u, v) *= Relation::Dependency; }
};

#endif  // !DPDT_SUB_PATTERN_H
