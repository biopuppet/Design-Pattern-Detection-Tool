#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

#include "graph.hpp"
#include "sub_pattern.hpp"

typedef std::vector<std::vector<size_t>> SPRefList;
typedef std::vector<std::vector<size_t>> CandidateVertexList;

class PatternAnalyzer;
class SubPatternDetector {
  friend class PatternAnalyzer;

  // System GCDR reference
  SrcGraph &system;

  // Sub-pattern instance set
  std::vector<SPRefList> spis{SPT_NUM};

  // dump user option
  bool dump_sp_;

 public:
  explicit SubPatternDetector(SrcGraph &sys, bool dump_sp = false)
      : system(sys), dump_sp_(dump_sp) {}

  SubPatternDetector(const SubPatternDetector &) = delete;
  SubPatternDetector &operator=(const SubPatternDetector &) = delete;

  void detect_all();

  void detect_sp_instances(SubPattern &sp);

  void combine_cv_3(const SubPattern &sp, const CandidateVertexList &cvs);
  void combine_cv_2(const SubPattern &sp, const CandidateVertexList &cvs);
  void combine_cv_1(const SubPattern &sp, const CandidateVertexList &cvs);

#define SUBPATTERN(U, L) static U L;
#include "subpattern.def"
};

#endif  // !DPDT_SP_DETECTOR_H
