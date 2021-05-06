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
  Aggregation = 3,  // TODO: Change back to 3
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
  intptr_t ctx_;
  const std::string name_;
  const std::string type_str_;
  QualType qual_;
  // association
  std::string listof_;
  unsigned dim_;

  Attribute(intptr_t ctx, const std::string &name, const std::string &type_str,
            QualType qual, const std::string &listof, unsigned dim = 0)
      : ctx_(ctx),
        name_(name),
        type_str_(type_str),
        qual_(qual),
        listof_(listof),
        dim_(dim) {}

  bool isList() const { return dim_ > 0; }
};

struct Parameter {
  const std::string name_;
  const std::string type_;
  // const std::string core_type_;
  // enum Type {
  //   Void,
  //   Int,
  //   Double,
  //   Java_int,
  //   Java_long,
  //   Java_double,
  //   Java_boolean,
  //   Java_String,
  //   Java_Hashtable,
  //   Java_Class,
  // } type_;

  Parameter(std::string &name, std::string &type) : name_(name), type_(type) {}
};

struct Method {
  intptr_t ctx_;
  enum Type {
    MethodDecl,
    InterfaceMethodDecl,
  } ctx_type_;

  const std::string name_;
  QualType qual_;
  std::string type_;
  std::vector<Parameter *> params_;  // including return value

  Method(intptr_t ctx, Type ctx_type, const std::string &name, QualType qual,
         std::string &type, std::vector<Parameter *> &params)
      : ctx_(ctx),
        ctx_type_(ctx_type),
        name_(name),
        qual_(qual),
        type_(type),
        params_(params) {}
};

struct MethodCmp {
  // TODO: Check parameters
  bool operator()(const Method *a, const Method *b) {
    return a->name_ != b->name_;
  }
};

struct Node {
  const std::string name_;
  QualType qual_;

  // Implemented interfaces
  std::vector<Node *> interfaces_;
  std::vector<std::string> itf_names_;

  // Extended class
  Node *parent_{nullptr};
  std::string parent_name_;

  // Attributes: property, ...
  std::vector<Attribute *> attrs_;

  // Methods
  std::vector<Method *> methods_;

  // Explicit construction methods that share the same name with its class.
  std::vector<Method *> constructors;

  Node(const std::string &name, QualType qual) : name_(name), qual_(qual) {}

  void addInterface(const std::string &name) { itf_names_.emplace_back(name); }
  void addInterface(Node *interface) { interfaces_.emplace_back(interface); }
  void setParent(const std::string &name) { parent_name_ = name; }
  void setParent(Node *parent) { parent_ = parent; }

  const char *name() const { return name_.c_str(); }
  bool hasParent() const { return parent_ != nullptr; }
  Node *getParent() { return parent_; }
};

struct Edge {
  size_t prime_ = Relation::None;
  bool isImpl_ = false;
  std::vector<Attribute *> ass_attrs_;
  std::vector<Attribute *> agg_attrs_;
  std::vector<Method *> methods_;

  bool has(const Edge &edge) { return prime_ % edge.prime_ == 0; }

  bool has(size_t composite) { return prime_ % composite == 0; }

  void add(size_t composite) { prime_ *= composite; }

  bool hasInheritance() const { return prime_ % Relation::Inheritance == 0; }

  bool isInheritance() const { return prime_ == Relation::Inheritance; }

  bool isImplementation() const { return hasInheritance() && isImpl_; }

  void addInheritance(bool isImpl = false) {
    prime_ *= Relation::Inheritance;
    isImpl_ = isImpl;
  }

  bool hasAssociation(size_t mult = 1) const {
    return prime_ % (Relation::Association * mult) == 0;
  }

  bool isAssociation(size_t mult = 1) const {
    return prime_ == (Relation::Association * mult);
  }

  void addAssociation() { prime_ *= Relation::Association; }

  void addAssociation(Attribute *attr) {
    prime_ *= Relation::Association;
    ass_attrs_.emplace_back(attr);
  }

  std::vector<Attribute *> &getAssAttrs() { return ass_attrs_; }

  bool hasAggregation(size_t mult = 1) const {
    return prime_ % (Relation::Aggregation * mult) == 0;
  }

  bool isAggregation(size_t mult = 1) const {
    return prime_ == (Relation::Aggregation * mult);
  }

  void addAggregation() { prime_ *= Relation::Aggregation; }

  void addAggregation(Attribute *attr) {
    prime_ *= Relation::Aggregation;
    agg_attrs_.emplace_back(attr);
  }

  std::vector<Attribute *> &getAggAttrs() { return agg_attrs_; }

  bool hasDependency(size_t mult = 1) const {
    return prime_ % (Relation::Dependency * mult) == 0;
  }

  bool isDependency(size_t mult = 1) const {
    return prime_ == (Relation::Dependency * mult);
  }

  void addDependency() { prime_ *= Relation::Dependency; }

  void addDependency(Method *method) {
    prime_ *= Relation::Dependency;
    methods_.emplace_back(method);
  }

  std::vector<Method *> &getDepMethods() { return methods_; }

  bool operator==(const Relation &r) { return r == prime_; }
  size_t operator*(size_t e) const { return this->prime_ * e; }
};

/**
 * Graph is an adj-matrix implemented complete directed graph.
 */
template <typename T>
class Graph {
 protected:
  // Graph size, length, # of nodes
  const size_t n_;

  // 1-dim implementation of adjacency matrix
  std::vector<T> matrix_;

 public:
  explicit Graph(size_t n, const T &e = T()) : n_(n), matrix_(n * n, e) {}
  Graph(const Graph &) = delete;
  Graph &operator=(const Graph &) = delete;

  const T &edge(size_t u, size_t v) const { return matrix_.at(u * n_ + v); }

  T &edge(size_t u, size_t v) { return matrix_.at(u * n_ + v); }

  size_t size() const { return n_; }

  size_t num_edges() const { return n_ * n_; }

  size_t cw_in(size_t v) const {
    size_t ret = 1;
    for (size_t i = 0; i < size(); ++i) {
      ret = edge(i, v) * ret;
    }
    return ret;
  }

  size_t cw_out(size_t v) const {
    size_t ret = 1;
    for (size_t i = 0; i < size(); ++i) {
      ret = edge(v, i) * ret;
    }
    return ret;
  }
};

class SrcGraph : public Graph<Edge> {
  using NodeList = std::vector<Node *>;

  // Associated class nodes
  NodeList *nodes_{nullptr};

 public:
  explicit SrcGraph(NodeList &nodes)
      : Graph<Edge>(nodes.size()), nodes_(&nodes) {}

  NodeList *nodes() const { return nodes_; }

  Node *node(size_t index) { return nodes_ ? nodes_->at(index) : nullptr; }

  Node *operator[](size_t index) { return node(index); }

  const Node *node(size_t index) const {
    return nodes_ ? nodes_->at(index) : nullptr;
  }

  void print_gcdr() const;

  bool hasInheritance(size_t u, size_t v) const {
    return edge(u, v).hasInheritance();
  }

  bool hasAssociation(size_t u, size_t v, size_t mult = 1) const {
    return edge(u, v).hasAssociation(mult);
  }

  bool hasAggregation(size_t u, size_t v, size_t mult = 1) const {
    return edge(u, v).hasAggregation(mult);
  }

  bool hasDependency(size_t u, size_t v, size_t mult = 1) const {
    return edge(u, v).hasDependency(mult);
  }

  bool hasAssOrAgg(size_t u, size_t v, size_t mult = 1) const {
    return hasAggregation(u, v, mult) || hasAssociation(u, v, mult);
  }

  void addInheritance(size_t u, size_t v, bool isImpl = false) {
    edge(u, v).addInheritance(isImpl);
  }

  void addAssociation(size_t u, size_t v) { edge(u, v).addAssociation(); }

  void addAggregation(size_t u, size_t v) { edge(u, v).addAggregation(); }

  void addDependency(size_t u, size_t v) { edge(u, v).addDependency(); }
};

#endif  // !DPDT_GRAPH_H
