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
    enum Type {
        Void,
        Int,
        Double,
        Class,
    } type;
    Node *class_type;
    enum Direction { IN, RETURN } direction;
    bool isUnique;
};

struct Method {
    std::string id;
    std::string name;
    Visibility visibility;
    bool isAbstract;                // bit-mask?
    std::vector<Parameter> params;  // including return value
};

struct MethodCmp {
    // TODO: Check parameters
    bool operator()(Method a, Method b) { return a.name != b.name; }
};

struct Node {
    std::string id;
    std::string m_name;
    Visibility visibility;
    bool isAbstract;  // bit-mask?

    // Attributes: property, ...
    std::vector<Attribute> attrs;

    // Methods
    std::vector<Method> methods;

    // Explicit construction methods that share the same name with its class.
    std::vector<Method *> constructors;

    Node() {}
    Node(const char *id,
         const char *name = "",
         Visibility v = Visibility::PRIVATE,
         bool isabstract = false)
        : id(id), m_name(name), visibility(v), isAbstract(isabstract) {}

    const char *name() const { return m_name.c_str(); }

    static Visibility get_vis(const char *s);
};

/**
 * Graph is a complete directed graph.
 */
class Graph {
    size_t n;

    // Optional property
    std::vector<Node> nodes;

    std::vector<size_t> matrix;

public:
    Graph(size_t n) : n(n), nodes(n), matrix(n * n, 1) {}

    const size_t edge(size_t u, size_t v) const { return matrix.at(u * n + v); }

    size_t &edge(size_t u, size_t v) { return matrix.at(u * n + v); }

    Node &node(size_t index) { return nodes.at(index); }

    const Node &node(size_t index) const { return nodes.at(index); }

    Node &operator[](size_t index) { return node(index); }

    size_t size() const { return n; }

    size_t num_nodes() const { return nodes.size(); }

    size_t num_edges() const { return n * n; }

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
};

#endif  // !DPDT_GRAPH_H