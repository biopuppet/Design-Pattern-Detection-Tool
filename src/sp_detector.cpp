#include "sp_detector.hpp"

#include <cstring>
#include <iostream>

#define SUBPATTERN(U, L) U SubPatternDetector::L;
#include "subpattern.def"

void SubPatternDetector::detect_all() {
#define SUBPATTERN(U, L) detect_sp_instances(L);
#include "subpattern.def"

  if (dump_sp_) {
    for (size_t i = 0; i < SPT_NUM; ++i) {
      if (spis[i].size()) {
        std::cout << SubPattern::name(i) << " (" << spis[i].size() << ")\n";
      }
      for (const auto &spi : spis[i]) {
        std::cout << " " << SubPattern::name(i) << ": ";
        for (const auto &it : spi) {
          std::cout << system[it]->name() << " ";
        }
        std::cout << "\n";
      }
    }
  }
  std::cout << std::endl;
}

void SubPatternDetector::combine_cv_1(const SubPattern &subp,
                                      const CandidateVertexList &cvs) {
  auto sp_e = subp.edge(0, 0);
  for (const auto &vd : cvs[0]) {
    if (!system.edge(vd, vd).has(sp_e)) {
      continue;
    }
    // printf("%s(%s)\n", subp.name(), system[vd].name());
    spis[subp.type()].push_back({vd});
  }
}

void SubPatternDetector::combine_cv_3(const SubPattern &subp,
                                      const CandidateVertexList &cvs) {
  const std::vector<size_t> sp_es = {subp.edge(0, 1), subp.edge(0, 2),
                                     subp.edge(1, 0), subp.edge(1, 2),
                                     subp.edge(2, 0), subp.edge(2, 1)};
  for (const auto vd1 : cvs[0]) {
    for (const auto vd2 : cvs[1]) {
      if (vd1 == vd2 || !system.edge(vd1, vd2).has(sp_es[0]) ||
          !system.edge(vd2, vd1).has(sp_es[2])) {
        continue;
      }
      for (const auto vd3 : cvs[2]) {
        // since there are no self-loops in 2 or 3-vertex-sub-patterns
        // we can presume vd1, vd2, vd3 are different.
        if (vd2 == vd3 || vd1 == vd3 || !system.edge(vd1, vd3).has(sp_es[1]) ||
            !system.edge(vd2, vd3).has(sp_es[3]) ||
            !system.edge(vd3, vd1).has(sp_es[4]) ||
            !system.edge(vd3, vd2).has(sp_es[5])) {
          continue;
        }
        // printf("%s(%s %s %s)\n", subp.name(), system[vd1]->name(),
        //  system[vd2]->name(), system[vd3]->name());
        spis[subp.type()].push_back({vd1, vd2, vd3});
      }
    }
  }
}

static bool greater(const std::array<size_t, 4> &a1,
                    const std::array<size_t, 4> &a2) {
  for (size_t k = 0; k < a1.size(); ++k) {
    if (a1[k] < a2[k]) {
      return false;
    }
  }
  return true;
}

void SubPatternDetector::detect_sp_instances(SubPattern &subp) {
  auto sp_num = subp.size();
  CandidateVertexList cvs(sp_num);

  // std::cerr << "Generating CVS for " << subp.name() << std::endl;
  for (size_t i = 0; i < sp_num; ++i) {
    for (size_t j = 0; j < system.size(); ++j) {
      // printf("sys[%lu](%s).cw_out=%lu sp[%lu].cw_out=%lu\n", j,
      //  system[j]->name(), system.cw_out(j), i, subp.cw_out(i));
      // printf("sys[%lu](%s).cw_in=%lu sp[%lu].cw_in=%lu\n", j,
      // system[j]->name(),
      //  system.cw_in(j), i, subp.cw_in(i));
      if (greater(system.cw_out(j), subp.cw_out(i)) &&
          greater(system.cw_in(j), subp.cw_in(i)))
        cvs[i].push_back(j);
    }
  }

  // std::cout << subp.name() << std::endl;
  // for (size_t i = 0; i < cvs.size(); ++i) {
  //   std::cout << "cvs[" << i << "]: ";
  //   for (auto v : cvs[i]) {
  //     std::cout << system[v]->name() << " ";
  //   }
  //   std::cout << "\n";
  // }
  // std::cerr << "Combining.." << std::endl;

  switch (sp_num) {
    case 3:
      combine_cv_3(subp, cvs);
      break;
    default:
      std::cerr << "Sub-pattern of " << sp_num
                << " vertices isn't supported.\n";
      break;
  }
}
