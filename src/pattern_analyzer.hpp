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
 public:
  std::vector<Proxy> patterns_;

  explicit ProxyAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;

  void behavioral_analyze() override;

  void print(bool structural = false) const override;

  void add(Proxy &&p) { patterns_.emplace_back(p); }
  void add(Proxy &p) { patterns_.emplace_back(p); }
};

class AdapterAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Adapter> patterns_;

  explicit AdapterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;

  void behavioral_analyze() override;

  void print(bool structural = false) const override;

  void add(Adapter &&p) { patterns_.emplace_back(p); }
};

class CompositeAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Composite> patterns_;

  explicit CompositeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Composite &&p) { patterns_.emplace_back(p); }
};

class DecoratorAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Decorator> patterns_;

  explicit DecoratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Decorator &&p) { patterns_.emplace_back(p); }
};

class BridgeAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Bridge> patterns_;

  explicit BridgeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Bridge &&p) { patterns_.emplace_back(p); }
};

class FlyweightAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Flyweight> patterns_;

  explicit FlyweightAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Flyweight &&p) { patterns_.emplace_back(p); }
};

class FacadeAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Facade> patterns_;

  explicit FacadeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Facade &&p) { patterns_.emplace_back(p); }
};

class AbstractFactoryAnalyzer : public PatternAnalyzer {
 public:
  std::vector<AbstractFactory> patterns_;

  explicit AbstractFactoryAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(AbstractFactory &&p) { patterns_.emplace_back(p); }
};

class BuilderAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Builder> patterns_;

  explicit BuilderAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Builder &&p) { patterns_.emplace_back(p); }
};

class FactoryAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Factory> patterns_;

  explicit FactoryAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Factory &&p) { patterns_.emplace_back(p); }
};

class PrototypeAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Prototype> patterns_;

  explicit PrototypeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Prototype &&p) { patterns_.emplace_back(p); }
};

class SingletonAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Singleton> patterns_;

  explicit SingletonAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Singleton &&p) { patterns_.emplace_back(p); }
};

class ResponsibilityChainAnalyzer : public PatternAnalyzer {
 public:
  std::vector<ResponsibilityChain> patterns_;

  explicit ResponsibilityChainAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(ResponsibilityChain &&p) { patterns_.emplace_back(p); }
};

class CommandAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Command> patterns_;

  explicit CommandAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Command &&p) { patterns_.emplace_back(p); }
};

class InterpreterAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Interpreter> patterns_;

  explicit InterpreterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Interpreter &&p) { patterns_.emplace_back(p); }
};

class IteratorAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Iterator> patterns_;

  explicit IteratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Iterator &&p) { patterns_.emplace_back(p); }
};

class MediatorAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Mediator> patterns_;

  explicit MediatorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Mediator &&p) { patterns_.emplace_back(p); }
};

class MementoAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Memento> patterns_;

  explicit MementoAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Memento &&p) { patterns_.emplace_back(p); }
};

class ObserverAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Observer> patterns_;

  explicit ObserverAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Observer &&p) { patterns_.emplace_back(p); }
};

class StateAnalyzer : public PatternAnalyzer {
 public:
  std::vector<State> patterns_;

  explicit StateAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(State &&p) { patterns_.emplace_back(p); }
};

class StrategyAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Strategy> patterns_;

  explicit StrategyAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Strategy &&p) { patterns_.emplace_back(p); }
};

class TemplateAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Template> patterns_;

  explicit TemplateAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Template &&p) { patterns_.emplace_back(p); }
};

class VisitorAnalyzer : public PatternAnalyzer {
 public:
  std::vector<Visitor> patterns_;

  explicit VisitorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Visitor &&p) { patterns_.emplace_back(p); }
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

  void behavioral_analyze() override {
    for (auto pa : pas_) {
      pa->behavioral_analyze();
    }
  }

  void print(bool structural = false) const override {
    for (auto pa : pas_) {
      pa->print(structural);
    }
  }
};

#endif  // !DPDT_PATTERN_ANALYZER_H
