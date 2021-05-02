#include "graph.hpp"

#include <cstring>
#include <iostream>

static std::string edge2str(size_t e) {
  std::string s = "";
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

size_t Graph::cw_in(size_t v) const {
  size_t ret = 1;
  for (size_t i = 0; i < size(); ++i) {
    ret *= edge(i, v);
  }
  return ret;
}

size_t Graph::cw_out(size_t v) const {
  size_t ret = 1;
  for (size_t i = 0; i < size(); ++i) {
    ret *= edge(v, i);
  }
  return ret;
}

void Graph::print_gcdr() const {
  auto n = size();
  for (size_t i = 0; i < n; ++i) {
    for (size_t j = 0; j < n; ++j) {
      if (edge(i, j) == 1) {
        continue;
      }
      std::cout << node(i)->name() << " --" << edge2str(edge(i, j)) << "--> "
                << node(j)->name() << std::endl;
    }
  }
  std::cout << std::endl;
}
