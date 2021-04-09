#ifndef DPDT_GCDR_H
#define DPDT_GCDR_H

#include <string>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_matrix.hpp>

#include "node.hpp"
#include "edge.hpp"

class Graph {
public:
    const std::string id;
};

typedef boost::adjacency_matrix<boost::directedS, Node, Edge, Graph> GCDR;
typedef boost::graph_traits<GCDR>::vertex_descriptor vertex_descriptor_t;
typedef boost::graph_traits<GCDR>::edge_descriptor edge_descriptor_t;
typedef boost::graph_traits<GCDR>::edge_iterator edge_iter;
typedef boost::graph_traits<GCDR>::vertex_iterator vertex_iter;

size_t gcdr_cw_in(const GCDR &g, vertex_descriptor_t v);
size_t gcdr_cw_out(const GCDR &g, vertex_descriptor_t v);

void print_gcdr(const GCDR &g);

#endif  // !DPDT_GCDR_H