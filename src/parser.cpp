#include <iostream>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>
#include <boost/graph/properties.hpp>
#include <boost/property_map/property_map.hpp>
#include <unordered_map>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "parser.hpp"

std::map<pugi::xml_node, vertex_descriptor_t> node_map;

void Parser::parse_class(Node &node, GCDR &gcdr) {
    // multi inheritance ignored
    auto cur = node.xnode;
    auto gen = cur.child("generalization");
    if (!gen.empty()) {
        auto father_id = gen.attribute("general").value();
        auto father = cur.parent().find_child_by_attribute("xmi:id", father_id);
        std::cout << "General--> " << father.attribute("name").value()
                  << std::endl;
        auto e = edge(node_map[cur], node_map[father], gcdr);
        gcdr[e.first].relation = Relation::Inheritance;
        std::cout << "exists? " << gcdr[e.first].relation << std::endl;
    }
}

int Parser::parse() {
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file("../adapter3.xmi");

    std::cout << "Load result: " << result.description() << std::endl;
    std::cout << "XMI version: "
              << doc.child("xmi:XMI").attribute("xmi:version").value()
              << std::endl;

    auto model = doc.child("xmi:XMI").child("uml:Model");

    /**
     * Find specific package in nested packages.
     */
    // for (auto pkg = model;
    //     pkg.find_child_by_attribute("xmi:type", "uml:Class");
    //     pkg = pkg.first_child()) {
    // }
    auto package = model.child("packagedElement");
    std::cout << "package: " << package.attribute("name").value() << std::endl;

    // auto class_node = package.find_child_by_attribute("xmi:type",
    // "uml:Class");

    int class_num = 0;
    for (auto child : package.children()) {
        if (child.attribute("name").empty())
            continue;
        ++class_num;
    }
    GCDR gcdr_system(class_num);

    int i = 0;
    for (auto child : package.children()) {
        if (child.attribute("name").empty())
            continue;
        std::cout << "class : " << child.attribute("name").value() << "\n";
        // auto node = boost::add_vertex(Node(child), gcdr_system);
        Node::adapt_node(gcdr_system[i], child);
        gcdr_system[i].xnode = child;
        node_map[child] = i;

        std::cout << gcdr_system[i].id << std::endl;
        std::cout << gcdr_system[i].name << std::endl;
        std::cout << gcdr_system[i].isAbstract << std::endl;
        std::cout << "\n";
        ++i;
    }

    // std::cout << gcdr_system.get_edge(3, 2).second.relation << std::endl;
    std::cout << "vertex num: " << num_vertices(gcdr_system) << std::endl;
    std::cout << "edge num: " << num_edges(gcdr_system) << std::endl;

        // Edge ed();
    for (int i = 0; i < class_num; ++i) {
        for (int j = 0; j < class_num; ++j) {
            add_edge(i, j, Relation::None, gcdr_system);
        }
    }

    for (int i = 0; i < class_num; ++i) {
        std::cout << "ver: " << gcdr_system[i].name << std::endl;
        parse_class(gcdr_system[i], gcdr_system);
    }

    const char *name = "ABCDEFGHIJKLMNOPQ";
    std::cout << "vertex set: ";
    print_vertices(gcdr_system, name);

    std::cout << "edge set: ";
    print_edges(gcdr_system, name);

    std::cout << "out-edges: " << std::endl;
    print_graph(gcdr_system, name);


    typedef boost::graph_traits<GCDR>::edge_iterator edge_iter ;
    std::pair<edge_iter, edge_iter> eip = edges(gcdr_system);
    for(edge_iter ei = eip.first; ei != eip.second; ++ei) {
        std::cout<< source(*ei, gcdr_system) << " ---> " 
        << target(*ei, gcdr_system) << " relation: "
        << gcdr_system[*ei].relation << std::endl;
    }

    // for (auto child : package.children()) {
    //     if (child.attribute("name").empty()) continue;
    //     ++i;
    // }
    return 0;
}
