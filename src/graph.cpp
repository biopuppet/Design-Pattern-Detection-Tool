#include "graph.hpp"

#include <cstring>
#include <iostream>

std::string Edge::str() const {
  std::string s = "";
  const auto &e = prime_;
  if (e & R_ASS) {
    s += "ass|";
  }
  if (e & R_AGG) {
    s += "agg|";
  }
  if (e & R_DEP) {
    s += "dep|";
  }
  if (e & R_INH) {
    s += "ihr";
  }
  return s;
}

std::ostream &operator<<(std::ostream &os, const QualType &p) {
  if (p.has(M_PUBLIC)) os << "Public ";
  if (p.has(M_STATIC)) os << "Static ";
  return os;
}

void SrcGraph::print() const {
  std::cout << "Total # of classes(interfaces): " << n_ << std::endl;
  for (size_t i = 0; i < n_; ++i) {
    for (size_t j = 0; j < n_; ++j) {
      if (edge(i, j).isNone()) {
        continue;
      }
      std::cout << node(i)->name() << " --" << edge(i, j).str() << "--> "
                << node(j)->name() << std::endl;
    }
  }
  std::cout << std::endl;
}

template <>
std::array<size_t, 4> Graph<Edge>::cw_in(size_t v) const {
  std::array<size_t, 4> ret{0};
  for (size_t i = 0; i < size(); ++i) {
    ret[0] += edge(i, v).hasInheritance();
    ret[1] += edge(i, v).hasAssociation();
    ret[2] += edge(i, v).hasAggregation();
    ret[3] += edge(i, v).hasDependency();
  }
  return ret;
}

template <>
std::array<size_t, 4> Graph<Edge>::cw_out(size_t v) const {
  std::array<size_t, 4> ret{0};
  for (size_t i = 0; i < size(); ++i) {
    ret[0] += edge(v, i).hasInheritance();
    ret[1] += edge(v, i).hasAssociation();
    ret[2] += edge(v, i).hasAggregation();
    ret[3] += edge(v, i).hasDependency();
  }
  return ret;
}