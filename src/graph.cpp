#include "graph.hpp"

#include <cstring>
#include <iostream>

std::string Edge::str() const {
  std::string s;
  auto e = prime_;
  while (e) {
    if (e % Relation::Association == 0) {
      e /= Relation::Association;
      s += "ass";
    } else if (e % Relation::Aggregation == 0) {
      e /= Relation::Aggregation;
      s += "agg";
    } else if (e % Relation::Dependency == 0) {
      e /= Relation::Dependency;
      s += "dep";
    } else if (e % Relation::Inheritance == 0) {
      e /= Relation::Inheritance;
      s += "ihr";
    } else {
      break;
    }
    s += "|";
  }
  return s;
}

std::ostream &operator<<(std::ostream &os, const QualType &p) {
  if (p.has(M_PUBLIC)) os << "Public ";
  if (p.has(M_STATIC)) os << "Static ";
  return os;
}

void SrcGraph::print() const {
  for (size_t i = 0; i < n_; ++i) {
    for (size_t j = 0; j < n_; ++j) {
      if (edge(i, j).prime_ == Relation::None) {
        continue;
      }
      std::cout << node(i)->name() << " --" << edge(i, j).str() << "--> "
                << node(j)->name() << std::endl;
    }
  }
  std::cout << std::endl;
}
