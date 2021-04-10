#ifndef DPDT_GCDR_H
#define DPDT_GCDR_H

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

// struct Edge {
// public:
//     size_t relation = None;

//     Edge(Relation rel = None) : relation(rel) {}
//     Edge(size_t rel) : relation(rel) {}
// };

enum class Visibility {
    PRIVATE,
    PROTECTED,
    PUBLIC,
    PACKAGE,  // Java
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

    Node(const char *id, const char *name, Visibility v = Visibility::PRIVATE)
        : id(id), name(name), visibility(v) {}

    static Visibility get_vis(const char *s);

    // static void adapt_node(Node &node, pugi::xml_node &_node);
};

/**
 * GCDR is a complete directed graph.
 */
class GCDR {
    const std::string id;

    size_t n;

    // Optional property
    std::vector<Node> nodes;

    std::vector<std::vector<size_t>> matrix;

public:
    GCDR(size_t n) : n(n), nodes(n), matrix(n, std::vector<size_t>(n, 1)) {}

    const size_t edge(size_t u, size_t v) const { return matrix[u][v]; }

    size_t &edge(size_t u, size_t v) { return matrix[u][v]; }

    Node &node(size_t index) { return nodes[index]; }

    const Node &node(size_t index) const { return nodes[index]; }

    const size_t size() const { return n; }

    const size_t num_nodes() const { return nodes.size(); }

    const size_t num_edges() const { return n * n; }

    size_t cw_in(size_t v) const;
    size_t cw_out(size_t v) const;
    void print_gcdr() const;
};

#endif  // !DPDT_GCDR_H