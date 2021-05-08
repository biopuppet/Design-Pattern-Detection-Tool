#ifndef DPDT_PATTERN_ANALYZER_H
#define DPDT_PATTERN_ANALYZER_H

#include <unordered_map>
#include <vector>

#include "pattern.hpp"
#include "sp_detector.hpp"

typedef std::unordered_map<std::string, PatternType> PatternMap;

class PatternAnalyzer {
 protected:
  SrcGraph &sys;

  const std::vector<SPRefList> &spis;

  // True if the pattern instance passed the behavioral check
  std::vector<bool> real_;

 public:
  explicit PatternAnalyzer(const SubPatternDetector &spd)
      : sys(spd.system), spis(spd.spis) {}

  PatternAnalyzer(const PatternAnalyzer &) = delete;
  PatternAnalyzer &operator=(const PatternAnalyzer &) = delete;

  virtual ~PatternAnalyzer() {}

  virtual void struct_analyze() = 0;

  virtual void behavioral_analyze() = 0;

  virtual void print(bool structural = false) const = 0;

  const char *name(size_t member) const { return sys[member]->name(); }

  static const PatternMap pattern_map;
  static PatternAnalyzer *createPatternAnalyzer(const SubPatternDetector &spd,
                                                const std::string &p);
};

class ProxyAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Proxy> patterns_;

 public:
  explicit ProxyAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;

  void behavioral_analyze() override;

  void print(bool structural = false) const override;

  void add(Proxy &&p) { patterns_.emplace_back(p); }
  void add(Proxy &p) { patterns_.emplace_back(p); }
};

class AdapterAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Adapter> patterns_;

 public:
  explicit AdapterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;

  void behavioral_analyze() override;

  void print(bool structural = false) const override;

  void add(Adapter &&p) { patterns_.emplace_back(p); }
};

#if 0
class CompositeAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Composite> patterns_;

 public:
  explicit CompositeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class DecoratorAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Decorator> patterns_;

  explicit DecoratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class BridgeAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Bridge> patterns_;

public:
  explicit BridgeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class FlyweightAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Flyweight> patterns_;

public:
  explicit FlyweightAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class FacadeAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Facade> patterns_;

public:
  explicit FacadeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class AbstractFactoryAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit AbstractFactoryAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class BuilderAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit BuilderAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class FactoryAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit FactoryAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class PrototypeAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit PrototypeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class SingletonAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit SingletonAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class ResponsibilityChainAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit ResponsibilityChainAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class CommandAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit CommandAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class InterpreterAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit InterpreterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class IteratorAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit IteratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class MediatorAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit MediatorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class MementoAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit MementoAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class ObserverAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit ObserverAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class StateAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit StateAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class StrategyAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit StrategyAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class TemplateAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit TemplateAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

class VisitorAnalyzer : public PatternAnalyzer {
  // Candidate pattern instances
  std::vector<Compsite> patterns_;
public:
  explicit VisitorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
};

#endif

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

  void behavioral_analyze() override {
    for (auto pa : pas_) {
      pa->behavioral_analyze();
    }
  }

  void print(bool structural = false) const override {
    for (auto pa : pas_) {
      pa->print();
    }
  }
};

#endif  // !DPDT_PATTERN_ANALYZER_H
