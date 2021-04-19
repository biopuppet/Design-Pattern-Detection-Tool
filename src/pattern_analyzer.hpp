#ifndef DPDT_PATTERN_ANALYZER_H
#define DPDT_PATTERN_ANALYZER_H

#include <vector>
#include <unordered_map>

#include "sp_detector.hpp"
#include "pattern.hpp"

typedef std::unordered_map<std::string, PatternType> PatternMap;

class PatternAnalyzer {
protected:
    Graph &sys;

    const std::vector<SPRefList> &spis;

    /// Candidate pattern instances
    std::vector<Pattern *> m_patterns;

    /// True if the pattern instance passed the behavioral check
    std::vector<bool> m_real;

public:
    PatternAnalyzer(const SubPatternDetector &spd)
        : sys(spd.system), spis(spd.spis) {}

    virtual ~PatternAnalyzer() {
        for (auto p : m_patterns) {
            delete p;
        }
    }

    virtual void struct_analyze() = 0;
    virtual void behavioral_check() {
        for (const auto &p : m_patterns) {
            m_real.push_back(p->behavioral_check());
        }
    }
    virtual void print() {
        for (const auto &p : m_patterns) {
            p->print();
        }
    }

    // typedef void (*analyze_pattern)();
    // #define PATTERN(x, c) void analyze_##x();
    // #include "pattern.def"

    // bool behavoiral_check(const Visitor &p);

    static const PatternMap pattern_map;
    static PatternAnalyzer *createPatternAnalyzer(const SubPatternDetector &spd,
                                                  const std::string &p);
};

class ProxyAnalyzer : public PatternAnalyzer {
public:
    ProxyAnalyzer(const SubPatternDetector &spd) : PatternAnalyzer(spd) {}

    void struct_analyze() override;
};

class AdapterAnalyzer : public PatternAnalyzer {
public:
    AdapterAnalyzer(const SubPatternDetector &spd) : PatternAnalyzer(spd) {}

    void struct_analyze() override;
};

// std::vector<Composite> composites;
// std::vector<Adapter> adapters;
// std::vector<Visitor> visitors;
// std::vector<Decorator> decorators;
// std::vector<Bridge> bridges;
// std::vector<Flyweight> flyweights;
// std::vector<Facade> facades;

// std::vector<Builder> builders;

/**
 * TODO: It could be a set of analyzers instead of 'All', but it needs hell
 * lota reconstruction.
 * PS. This is a case of composite pattern.
 */
class AllAnalyzer : public PatternAnalyzer {
public:
    std::vector<PatternAnalyzer *> m_pas;

    AllAnalyzer(const SubPatternDetector &spd) : PatternAnalyzer(spd) {
#define PATTERN(X, C) m_pas.push_back(new C##Analyzer(spd));
#include "pattern.def"
    }

    ~AllAnalyzer() {
        for (auto p : m_pas) {
            delete p;
        }
    }

    void struct_analyze() override {
        for (auto p : m_pas) {
            p->struct_analyze();
        }
    }

    void behavioral_check() override {
        for (auto p : m_pas) {
            p->behavioral_check();
        }
    }

    void print() override {
        for (auto p : m_pas) {
            p->print();
        }
    }
};

#endif  // !DPDT_PATTERN_ANALYZER_H
