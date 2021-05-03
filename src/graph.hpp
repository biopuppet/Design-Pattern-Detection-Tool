#ifndef DPDT_GRAPH_H
#define DPDT_GRAPH_H

#include <string>
#include <vector>

struct Node;

/**
 * Use prime number for composite relation factoring
 */
enum Relation {
  None = 1,
  Association = 2,
  Aggregation = 2,  // TODO: Change back to 3
  Inheritance = 5,
  Dependency = 7,
};

enum Modifier {
  M_NONE = 0x0,
  // Visibility
  M_PUBLIC = 0x1,
  M_PROTECTED = 0x2,
  M_PRIVATE = 0x4,

  M_ABSTRACT = 0x10,
  M_STATIC = 0x20,
  M_FINAL = 0x40,
  M_SYNCHRONIZED = 0x80,
  M_NATIVE = 0x100,
  // field
  M_TRANSIENT = 0x200,
  M_VOLATILE = 0x400,
};

class QualType {
 public:
  QualType(unsigned type = Modifier::M_NONE) : type_(type) {}

  unsigned getType() const { return type_; }

  void setType(const unsigned mod) { type_ |= mod; }

  void setType(const unsigned m1, const unsigned m2) { setType(m1 | m2); }

  template <typename... Ms>
  void setType(const unsigned m1, const unsigned m2, const Ms... ms) {
    setType(m1 | m2, ms...);
  }

  bool has(Modifier mod) const { return type_ & mod; }

  bool hasOneOf(Modifier m1, Modifier m2) const { return has(m1) || has(m2); }

  template <typename... Ms>
  bool hasOneOf(Modifier m1, Modifier m2, Ms... ms) const {
    return has(m1) || hasOneOf(m2, ms...);
  }

  friend std::ostream &operator<<(std::ostream &os, const QualType &p);

 private:
  unsigned type_;
};

struct Attribute {
  const std::string name_;
  const std::string type_str_;
  QualType qual_;
  // association
  unsigned dim_;
  Attribute(const std::string &name, const std::string &type_str, QualType qual,
            unsigned dim = 0)
      : name_(name), type_str_(type_str), qual_(qual), dim_(dim) {}
};

struct Parameter {
  std::string name_;
  std::string type_str_;
  enum Type {
    Void,
    Int,
    Double,
    Java_int,
    Java_long,
    Java_double,
    Java_boolean,
    Java_String,
    Java_Hashtable,
    Java_Class,
  } type_;
  enum Direction { IN, RETURN } dir_;
  bool isUnique_;

  Parameter(const char *name, std::string &type_str, Type type, Direction dir)
      : name_(name), type_str_(type_str), type_(type), dir_(dir) {}
};

struct Method {
  std::string name;
  Modifier modi;
  bool isAbstract;                  // bit-mask?
  std::vector<Parameter *> params;  // including return value
};

struct MethodCmp {
  // TODO: Check parameters
  bool operator()(const Method *a, const Method *b) {
    return a->name != b->name;
  }
};

struct Node {
  const std::string name_;
  QualType qual_;

  // Implemented interfaces
  std::vector<Node *> interfaces_;

  // Extended class
  Node *parent_;

  // Attributes: property, ...
  std::vector<Attribute *> attrs_;

  // Methods
  std::vector<Method *> methods;

  // Explicit construction methods that share the same name with its class.
  std::vector<Method *> constructors;

  Node() {}
  Node(const std::string &name, QualType qual,
       std::vector<Node *> interfaces = std::vector<Node *>(),
       Node *parent = nullptr)
      : name_(name), qual_(qual), interfaces_(interfaces), parent_(parent) {}

  const char *name() const { return name_.c_str(); }
  bool hasParent() const { return parent_ != nullptr; }
  Node *getParent() { return parent_; }
};

/**
 * Graph is a complete directed graph.
 */
class Graph {
  using NodeList = std::vector<Node *>;

  // Graph size, length, # of nodes
  const size_t n_;

  // Associated class nodes
  NodeList *nodes_{nullptr};

  // 1-dim implementation of adjacency matrix
  std::vector<size_t> matrix_;

 public:
  explicit Graph(size_t n) : n_(n), nodes_(nullptr), matrix_(n * n, 1) {}

  explicit Graph(NodeList &nodes)
      : n_(nodes.size()), nodes_(&nodes), matrix_(n_ * n_, 1) {}

  Graph(const Graph &) = delete;
  Graph &operator=(const Graph &) = delete;

  size_t edge(size_t u, size_t v) const { return matrix_.at(u * n_ + v); }

  size_t &edge(size_t u, size_t v) { return matrix_.at(u * n_ + v); }

  Node *node(size_t index) { return nodes_ ? nodes_->at(index) : nullptr; }

  const Node *node(size_t index) const {
    return nodes_ ? nodes_->at(index) : nullptr;
  }

  Node *operator[](size_t index) { return node(index); }

  size_t size() const { return n_; }

  size_t num_nodes() const { return n_; }

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

  void addInheritanceUnsafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Inheritance;
  }

  void addAssociationUnsafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Association;
  }

  void addAggregationUnsafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Aggregation;
  }

  void addDependencyUnsafe(size_t u, size_t v) {
    edge(u, v) *= Relation::Dependency;
  }

  void addInheritance(size_t u, size_t v) {
    if (!hasInheritance(u, v)) {
      addInheritanceUnsafe(u, v);
    }
  }

  void addAssociation(size_t u, size_t v) {
    if (!hasAssociation(u, v)) {
      addAssociationUnsafe(u, v);
    }
  }

  void addAggregation(size_t u, size_t v) {
    if (!hasAggregation(u, v)) {
      addAggregationUnsafe(u, v);
    }
  }

  void addDependency(size_t u, size_t v) {
    if (!hasDependency(u, v)) {
      addDependencyUnsafe(u, v);
    }
  }
};

#endif  // !DPDT_GRAPH_H