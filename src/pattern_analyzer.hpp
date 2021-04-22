#ifndef DPDT_PATTERN_ANALYZER_H
#define DPDT_PATTERN_ANALYZER_H

#include <unordered_map>
#include <vector>

#include "pattern.hpp"
#include "sp_detector.hpp"

typedef std::unordered_map<std::string, PatternType> PatternMap;

class PatternAnalyzer {
 protected:
  Graph &sys;

  const std::vector<SPRefList> &spis;

  // Candidate pattern instances
  std::vector<Pattern *> patterns_;

  // True if the pattern instance passed the behavioral check
  std::vector<bool> real_;

 public:
  explicit PatternAnalyzer(const SubPatternDetector &spd)
      : sys(spd.system), spis(spd.spis) {}

  PatternAnalyzer(const PatternAnalyzer &) = delete;
  PatternAnalyzer &operator=(const PatternAnalyzer &) = delete;

  virtual ~PatternAnalyzer() {
    for (auto p : patterns_) {
      delete p;
    }
  }

  void add_pattern(Pattern *p) { patterns_.emplace_back(p); }

  virtual void struct_analyze() = 0;

  virtual void behavioral_check() {
    for (const auto &p : patterns_) {
      p->print();
      real_.push_back(p->behavioral_check());
    }
  }

  virtual void print() {
    for (const auto &p : patterns_) {
      p->print();
    }
  }

  static const PatternMap pattern_map;
  static PatternAnalyzer *createPatternAnalyzer(const SubPatternDetector &spd,
                                                const std::string &p);
};

class ProxyAnalyzer : public PatternAnalyzer {
 public:
  explicit ProxyAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class AdapterAnalyzer : public PatternAnalyzer {
 public:
  explicit AdapterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class CompositeAnalyzer : public PatternAnalyzer {
 public:
  explicit CompositeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class DecoratorAnalyzer : public PatternAnalyzer {
 public:
  explicit DecoratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class BridgeAnalyzer : public PatternAnalyzer {
 public:
  explicit BridgeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class FlyweightAnalyzer : public PatternAnalyzer {
 public:
  explicit FlyweightAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class FacadeAnalyzer : public PatternAnalyzer {
 public:
  explicit FacadeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class BuilderAnalyzer : public PatternAnalyzer {
 public:
  explicit BuilderAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class PrototypeAnalyzer : public PatternAnalyzer {
 public:
  explicit PrototypeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class SingletonAnalyzer : public PatternAnalyzer {
 public:
  explicit SingletonAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class ResponsibilityChainAnalyzer : public PatternAnalyzer {
 public:
  explicit ResponsibilityChainAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class CommandAnalyzer : public PatternAnalyzer {
 public:
  explicit CommandAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class InterpreterAnalyzer : public PatternAnalyzer {
 public:
  explicit InterpreterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class IteratorAnalyzer : public PatternAnalyzer {
 public:
  explicit IteratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class MediatorAnalyzer : public PatternAnalyzer {
 public:
  explicit MediatorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class MementoAnalyzer : public PatternAnalyzer {
 public:
  explicit MementoAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class VisitorAnalyzer : public PatternAnalyzer {
 public:
  explicit VisitorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

/**
 * TODO: It could be a set of analyzers instead of 'All', but it needs hell
 * lota reconstruction.
 * PS. This is a case of composite pattern.
 */
class AllAnalyzer : public PatternAnalyzer {
 public:
  std::vector<PatternAnalyzer *> pas_;

  explicit AllAnalyzer(const SubPatternDetector &spd) : PatternAnalyzer(spd) {
#define PATTERN(X, C) pas_.push_back(new C##Analyzer(spd));
#include "pattern.def"
    // std::cout << pas_.size() << std::endl;
  }

  ~AllAnalyzer() {
    for (auto pa : pas_) {
      delete pa;
    }
  }

  void struct_analyze() override {
    for (auto pa : pas_) {
      pa->struct_analyze();
    }
  }

  void behavioral_check() override {
    for (auto pa : pas_) {
      pa->behavioral_check();
    }
  }

  void print() override {
    for (auto pa : pas_) {
      pa->print();
    }
  }
};

#endif  // !DPDT_PATTERN_ANALYZER_H
