#ifndef DPDT_GRAPH_H
#define DPDT_GRAPH_H

#include <string>
#include <vector>

/**
 * Use prime number for composite relation factoring
 */
enum Relation {
  None = 1,
  Association = 2,
  Inheritance = 3,
  Aggregation = 5,  // TODO: Change back to 5
  Dependency = 7,
};

enum class Visibility {
  PRIVATE,
  PROTECTED,
  PUBLIC,
  PACKAGE,  // Java
};

struct Attribute {};

struct Node;
struct Parameter {
  std::string id;
  std::string name;
  std::string type_str;
  enum Type {
    Void,
    Int,
    Double,
    Java_Class,
    Java_String,
  } type_;
  enum Direction { IN, RETURN } direction;
  bool isUnique;

  Parameter(const char *id, const char *name, std::string &type, Type ttype,
            Direction dir)
      : id(id), name(name), type_str(type), type_(ttype), direction(dir) {}
};

struct Method {
  std::string id;
  std::string name;
  Visibility visibility;
  bool isAbstract;                  // bit-mask?
  std::vector<Parameter *> params;  // including return value
};

struct MethodCmp {
  // TODO: Check parameters
  bool operator()(Method *a, Method *b) { return a->name != b->name; }
};

struct Node {
  std::string id_;
  std::string name_;
  Visibility visibility_;
  bool isAbstract_;  // bit-mask?

  // Attributes: property, ...
  std::vector<Attribute> attrs;

  // Methods
  std::vector<Method *> methods;

  // Explicit construction methods that share the same name with its class.
  std::vector<Method *> constructors;

  Node() {}
  Node(const char *id, const char *name = "",
       Visibility v = Visibility::PRIVATE, bool isAbstract = false)
      : id_(id), name_(name), visibility_(v), isAbstract_(isAbstract) {}

  const char *name() const { return name_.c_str(); }
};

/**
 * Graph is a complete directed graph.
 */
class Graph {
  // Graph size, length, # of nodes
  const size_t n_;

  // Associated class nodes
  std::vector<Node> nodes_;

  // 1-dim implementation of adjacency matrix
  std::vector<size_t> matrix_;

 public:
  explicit Graph(size_t n) : n_(n), nodes_(n), matrix_(n * n, 1) {}

  Graph(const Graph &) = delete;
  Graph &operator=(const Graph &) = delete;

  size_t edge(size_t u, size_t v) const { return matrix_.at(u * n_ + v); }

  size_t &edge(size_t u, size_t v) { return matrix_.at(u * n_ + v); }

  Node &node(size_t index) { return nodes_.at(index); }

  const Node &node(size_t index) const { return nodes_.at(index); }

  Node &operator[](size_t index) { return node(index); }

  size_t size() const { return n_; }

  size_t num_nodes() const { return nodes_.size(); }

  size_t num_edges() const { return n_ * n_; }

  size_t cw_in(size_t v) const;

  size_t cw_out(size_t v) const;

  void print_gcdr() const;

  bool hasInheritance(size_t u, size_t v) const {
    return edge(u, v) % Relation::Inheritance == 0;
  }

  bool hasAssociation(size_t u, size_t v) const {
    return edge(u, v) % Relation::Association == 0;
  }

  bool hasAggregation(size_t u, size_t v) const {
    return edge(u, v) % Relation::Aggregation == 0;
  }

  bool hasDependency(size_t u, size_t v) const {
    return edge(u, v) % Relation::Dependency == 0;
  }

  bool hasAssOrAgg(size_t u, size_t v) const {
    return hasAggregation(u, v) || hasAssociation(u, v);
  }

  void addInheritanceSafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Inheritance;
  }

  void addAssociationSafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Association;
  }

  void addAggregationSafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Aggregation;
  }

  void addDependencySafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Dependency;
  }

  void addInheritance(size_t u, size_t v) {
    if (!hasInheritance(u, v)) {
      addInheritanceSafe(u, v);
    }
  }

  void addAssociation(size_t u, size_t v) {
    if (!hasAssociation(u, v)) {
      addAssociationSafe(u, v);
    }
  }

  void addAggregation(size_t u, size_t v) {
    if (!hasAggregation(u, v)) {
      addAggregationSafe(u, v);
    }
  }

  void addDependency(size_t u, size_t v) {
    if (!hasDependency(u, v)) {
      addDependencySafe(u, v);
    }
  }
};

#endif  // !DPDT_GRAPH_H