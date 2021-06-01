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
  std::vector<Adapter> patterns_;

 public:
  explicit AdapterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;

  void behavioral_analyze() override;

  void print(bool structural = false) const override;

  void add(Adapter &&p) { patterns_.emplace_back(p); }
};

class CompositeAnalyzer : public PatternAnalyzer {
  std::vector<Composite> patterns_;

 public:
  explicit CompositeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Composite &&p) { patterns_.emplace_back(p); }
};

class DecoratorAnalyzer : public PatternAnalyzer {
  std::vector<Decorator> patterns_;

 public:
  explicit DecoratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Decorator &&p) { patterns_.emplace_back(p); }
};

class BridgeAnalyzer : public PatternAnalyzer {
  std::vector<Bridge> patterns_;

 public:
  explicit BridgeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Bridge &&p) { patterns_.emplace_back(p); }
};

class FlyweightAnalyzer : public PatternAnalyzer {
  std::vector<Flyweight> patterns_;

 public:
  explicit FlyweightAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Flyweight &&p) { patterns_.emplace_back(p); }
};

class FacadeAnalyzer : public PatternAnalyzer {
  std::vector<Facade> patterns_;

 public:
  explicit FacadeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Facade &&p) { patterns_.emplace_back(p); }
};

class AbstractFactoryAnalyzer : public PatternAnalyzer {
  std::vector<AbstractFactory> patterns_;

 public:
  explicit AbstractFactoryAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(AbstractFactory &&p) { patterns_.emplace_back(p); }
};

class BuilderAnalyzer : public PatternAnalyzer {
  std::vector<Builder> patterns_;

 public:
  explicit BuilderAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Builder &&p) { patterns_.emplace_back(p); }
};

class FactoryAnalyzer : public PatternAnalyzer {
  std::vector<Factory> patterns_;

 public:
  explicit FactoryAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Factory &&p) { patterns_.emplace_back(p); }
};

class PrototypeAnalyzer : public PatternAnalyzer {
  std::vector<Prototype> patterns_;

 public:
  explicit PrototypeAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Prototype &&p) { patterns_.emplace_back(p); }
};

class SingletonAnalyzer : public PatternAnalyzer {
  std::vector<Singleton> patterns_;

 public:
  explicit SingletonAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Singleton &&p) { patterns_.emplace_back(p); }
};

class ResponsibilityChainAnalyzer : public PatternAnalyzer {
  std::vector<ResponsibilityChain> patterns_;

 public:
  explicit ResponsibilityChainAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(ResponsibilityChain &&p) { patterns_.emplace_back(p); }
};

class CommandAnalyzer : public PatternAnalyzer {
  std::vector<Command> patterns_;

 public:
  explicit CommandAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Command &&p) { patterns_.emplace_back(p); }
};

class InterpreterAnalyzer : public PatternAnalyzer {
  std::vector<Interpreter> patterns_;

 public:
  explicit InterpreterAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Interpreter &&p) { patterns_.emplace_back(p); }
};

class IteratorAnalyzer : public PatternAnalyzer {
  std::vector<Iterator> patterns_;

 public:
  explicit IteratorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Iterator &&p) { patterns_.emplace_back(p); }
};

class MediatorAnalyzer : public PatternAnalyzer {
  std::vector<Mediator> patterns_;

 public:
  explicit MediatorAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Mediator &&p) { patterns_.emplace_back(p); }
};

class MementoAnalyzer : public PatternAnalyzer {
  std::vector<Memento> patterns_;

 public:
  explicit MementoAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Memento &&p) { patterns_.emplace_back(p); }
};

class ObserverAnalyzer : public PatternAnalyzer {
  std::vector<Observer> patterns_;

 public:
  explicit ObserverAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Observer &&p) { patterns_.emplace_back(p); }
};

class StateAnalyzer : public PatternAnalyzer {
  std::vector<State> patterns_;

 public:
  explicit StateAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(State &&p) { patterns_.emplace_back(p); }
};

class StrategyAnalyzer : public PatternAnalyzer {
  std::vector<Strategy> patterns_;

 public:
  explicit StrategyAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Strategy &&p) { patterns_.emplace_back(p); }
};

class TemplateAnalyzer : public PatternAnalyzer {
  std::vector<Template> patterns_;

 public:
  explicit TemplateAnalyzer(const SubPatternDetector &spd)
      : PatternAnalyzer(spd) {}

  void struct_analyze() override;
  void behavioral_analyze() override;
  void print(bool structural = false) const override;
  void add(Template &&p) { patterns_.emplace_back(p); }
};

class VisitorAnalyzer : public PatternAnalyzer {
  std::vector<Visitor> patterns_;

 public:
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
