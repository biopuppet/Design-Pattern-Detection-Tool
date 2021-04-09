#ifndef DPDT_EDGE_H
#define DPDT_EDGE_H

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

struct Edge {
public:
    size_t relation = None;

    Edge(Relation rel = None) : relation(rel) {}
    Edge(size_t rel) : relation(rel) {}
};

#endif  // !DPDT_EDGE_H
