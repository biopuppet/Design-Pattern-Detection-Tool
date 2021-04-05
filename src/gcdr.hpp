#ifndef DPDS_GCDR_H
#define DPDS_GCDR_H

#include <boost/graph/adjacency_matrix.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/properties.hpp>
#include <boost/property_map/property_map.hpp>

#include "node.hpp"
#include "edge.hpp"

class Graph {
public:
    const std::string id;
    std::string name;
    
};


typedef boost::adjacency_matrix<boost::directedS, Node, Edge, Graph> GCDR;
typedef boost::graph_traits<GCDR>::vertex_descriptor vertex_descriptor_t;

#endif // !DPDS_GCDR_H