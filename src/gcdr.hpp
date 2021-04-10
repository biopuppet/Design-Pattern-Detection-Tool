#ifndef DPDT_GRAPH_H
#define DPDT_GRAPH_H

#include <string>
#include <vector>
#include <cassert>

/**
 * Use prime number for composite relation factoring
 */
enum Relation {
    None = 1,
    Association = 2,
    Inheritance = 3,
    Aggregation = 5,
    Dependency = 7,
};

enum class Visibility {
    PRIVATE,
    PROTECTED,
    PUBLIC,
    PACKAGE,  // Java
};

class Attribute {

};

class Parameter {
    std::string name;
    enum Direction {IN, RETURN} direction;
    bool isUnique;
};

class Method {
    std::string name;
    Visibility visibility;
    bool isAbstract;  // bit-mask?
    std::vector<Parameter> params; // including return value
};

class Node {
public:
    std::string id;
    std::string name;
    Visibility visibility;
    bool isAbstract;  // bit-mask?
    // Property
    // Method

    Node() {}
    Node(const char *id, const char *name = "", 
    Visibility v = Visibility::PRIVATE, bool isabstract = false)
        : id(id), name(name), visibility(v), isAbstract(isabstract) {}

    static Visibility get_vis(const char *s);
};

/**
 * Graph is a complete directed graph.
 */
class Graph {
    const std::string id;

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

    size_t size() const { return n; }

    size_t num_nodes() const { return nodes.size(); }

    size_t num_edges() const { return n * n; }

    size_t cw_in(size_t v) const;

    size_t cw_out(size_t v) const;

    void print_gcdr() const;
};

#endif  // !DPDT_GRAPH_H