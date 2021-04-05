#ifndef DPDS_EDGE_H
#define DPDS_EDGE_H

enum Relation {
    None = 1,
    Association = 2,
    Inheritance = 3,
    Aggregation = 5,
    Dependency = 7,
};

struct Edge {
public:
    Relation relation = None;

    Edge(Relation rel = None) : relation(rel) {}
};

#endif  // !DPDS_EDGE_H