#ifndef DPDS_GCDR_H
#define DPDS_GCDR_H

#include <boost/graph/adjacency_matrix.hpp>
#include "node.hpp"
#include "edge.hpp"

class GCDR {
public:
    const std::string id;
    std::string name;
    
};

typedef boost::adjacency_matrix<boost::directedS, Node, Edge, GCDR> Graph;

#endif // !DPDS_GCDR_H