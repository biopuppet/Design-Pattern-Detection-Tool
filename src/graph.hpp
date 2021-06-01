#ifndef DPDT_GRAPH_H
#define DPDT_GRAPH_H

#include <array>
#include <string>
#include <unordered_map>
#include <vector>

#include "antlr4-runtime.h"

struct Node;

/**
 *
 */
enum Relation {
  R_NONE = 0x0,
  R_ASS = 0x1,
  R_AGG = 0x2,
  R_INH = 0x4,
  R_DEP = 0x8,
  R_MAX = 0x10,
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

  void clear() { type_ = Modifier::M_NONE; }

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
  antlr4::tree::ParseTree *ctx_;
  enum Type {
    MethodDecl,
    InterfaceMethodDecl,
    CtorDecl,
  } ctx_type_;

  const std::string name_;
  QualType qual_;
  std::string type_;
  std::vector<Parameter *> params_;  // including return value

  Method(antlr4::tree::ParseTree *ctx, Type ctx_type, const std::string &name,
         QualType qual, std::string &type, std::vector<Parameter *> &params)
      : ctx_(ctx),
        ctx_type_(ctx_type),
        name_(name),
        qual_(qual),
        type_(type),
        params_(params) {}

  const std::string &name() const { return name_; }

  bool isPrivate() const { return qual_.has(M_PRIVATE); }
  bool isProtected() const { return qual_.has(M_PROTECTED); }
  bool isPublic() const { return qual_.has(M_PUBLIC); }
  bool isStatic() const { return qual_.has(M_STATIC); }
  bool isStaticPublic() const { return isPublic() && isStatic(); }
  bool operator==(const Method &m) { return this->name_ == m.name_; }
  bool operator!=(const Method &m) { return this->name_ != m.name_; }
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
  std::vector<Method *> ctors_;

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
  size_t prime_ = R_NONE;
  bool isImpl_ = false;
  std::vector<Attribute *> ass_attrs_;
  std::vector<Attribute *> agg_attrs_;
  std::vector<Method *> methods_;

  bool has(const Edge &edge) { return (prime_ & edge.prime_) == edge.prime_; }

  bool has(size_t comp) { return (prime_ & comp) == comp; }

  void add(size_t comp) { prime_ |= comp; }

  bool isNone() const { return prime_ == R_NONE; }

  bool hasInheritance() const { return prime_ & R_INH; }

  bool isInheritance() const { return prime_ == R_INH; }

  bool hasImplementation() const { return hasInheritance() && isImpl_; }

  bool isImplementation() const { return isInheritance() && isImpl_; }

  void addInheritance(bool isImpl = false) {
    prime_ |= R_INH;
    isImpl_ = isImpl;
  }

  bool hasAssociation() const { return prime_ & R_ASS; }

  bool isAssociation() const { return prime_ == R_ASS; }

  void addAssociation() { prime_ |= R_ASS; }

  void addAssociation(Attribute *attr) {
    prime_ |= R_ASS;
    ass_attrs_.emplace_back(attr);
  }

  std::vector<Attribute *> &getAssAttrs() { return ass_attrs_; }

  bool hasAggregation() const { return prime_ & R_AGG; }

  bool isAggregation() const { return prime_ == R_AGG; }

  void addAggregation() { prime_ |= R_AGG; }

  void addAggregation(Attribute *attr) {
    prime_ |= R_AGG;
    agg_attrs_.emplace_back(attr);
  }

  std::vector<Attribute *> &getAggAttrs() { return agg_attrs_; }

  bool hasDependency() const { return prime_ & R_DEP; }

  bool isDependency() const { return prime_ == R_DEP; }

  void addDependency() { prime_ |= R_DEP; }

  void addDependency(Method *method) {
    prime_ |= R_DEP;
    methods_.emplace_back(method);
  }

  std::vector<Method *> &getDepMethods() { return methods_; }

  std::string str() const;

  bool operator==(const Relation &r) { return r == prime_; }

  size_t operator*(size_t e) const { return this->prime_ * e; }
};

/**
 * Graph is an adj-matrix implemented complete directed graph.
 */
template <typename T>
class Graph {
 public:
  using CWMap = std::unordered_map<size_t, std::array<size_t, 4>>;

 protected:
  // Graph size, # of nodes
  const size_t n_;

  // 1-dim implementation of adjacency matrix
  std::vector<T> matrix_;

  CWMap cw_in_;
  CWMap cw_out_;

 public:
  explicit Graph(size_t n, const T &e = T()) : n_(n), matrix_(n * n, e) {}
  Graph(const Graph &) = delete;
  Graph &operator=(const Graph &) = delete;
  virtual ~Graph() {}

  const T &edge(size_t u, size_t v) const { return matrix_.at(u * n_ + v); }

  T &edge(size_t u, size_t v) { return matrix_.at(u * n_ + v); }

  size_t size() const { return n_; }

  size_t num_edges() const { return n_ * n_; }

  const std::array<size_t, 4> &cw_in(size_t v) {
    if (cw_in_.count(v)) return cw_in_.at(v);
    std::array<size_t, 4> ret{0};
    for (size_t i = 0; i < size(); ++i) {
      ret[0] += hasInheritance(i, v);
      ret[1] += hasAssociation(i, v);
      ret[2] += hasAggregation(i, v);
      ret[3] += hasDependency(i, v);
    }
    cw_in_.emplace(v, ret);
    return cw_in_.at(v);
  }

  const std::array<size_t, 4> &cw_out(size_t v) {
    if (cw_out_.count(v)) return cw_out_.at(v);
    std::array<size_t, 4> ret{0};
    for (size_t i = 0; i < size(); ++i) {
      ret[0] += hasInheritance(v, i);
      ret[1] += hasAssociation(v, i);
      ret[2] += hasAggregation(v, i);
      ret[3] += hasDependency(v, i);
    }
    cw_out_.emplace(v, ret);
    return cw_out_.at(v);
  }

  virtual bool hasInheritance(size_t u, size_t v) const = 0;

  virtual bool hasAssociation(size_t u, size_t v) const = 0;

  virtual bool hasAggregation(size_t u, size_t v) const = 0;

  virtual bool hasDependency(size_t u, size_t v) const = 0;
};

class SrcGraph : public Graph<Edge> {
  using NodeList = std::vector<Node *>;

  // Associated class nodes
  NodeList &nodes_;

 public:
  explicit SrcGraph(NodeList &nodes)
      : Graph<Edge>(nodes.size()), nodes_(nodes) {}

  NodeList &nodes() const { return nodes_; }

  Node *node(size_t index) { return nodes_.at(index); }

  Node *operator[](size_t index) { return node(index); }

  Node *node(size_t index) const { return nodes_.at(index); }

  void print() const;

  bool hasInheritance(size_t u, size_t v) const {
    return edge(u, v).hasInheritance();
  }

  bool hasAssociation(size_t u, size_t v) const {
    return edge(u, v).hasAssociation();
  }

  bool hasAggregation(size_t u, size_t v) const {
    return edge(u, v).hasAggregation();
  }

  bool hasDependency(size_t u, size_t v) const {
    return edge(u, v).hasDependency();
  }

  bool hasAssOrAgg(size_t u, size_t v) const {
    return hasAggregation(u, v) || hasAssociation(u, v);
  }

  void addInheritance(size_t u, size_t v, bool isImpl = false) {
    edge(u, v).addInheritance(isImpl);
  }

  void addAssociation(size_t u, size_t v) { edge(u, v).addAssociation(); }

  void addAssociation(size_t u, size_t v, Attribute *attr) {
    edge(u, v).addAssociation(attr);
  }

  void addAggregation(size_t u, size_t v) { edge(u, v).addAggregation(); }

  void addAggregation(size_t u, size_t v, Attribute *attr) {
    edge(u, v).addAggregation(attr);
  }

  void addDependency(size_t u, size_t v) { edge(u, v).addDependency(); }
};

#endif  // !DPDT_GRAPH_H
