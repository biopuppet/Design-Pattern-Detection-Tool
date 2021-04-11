#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <cstring>
// #include <boost/graph/adjacency_matrix.hpp>

#include "pugixml.hpp"
#include "parser.hpp"

static std::map<pugi::xml_node, size_t> node_map;
static std::unordered_map<std::string, pugi::xml_node> xml_nodes;
static std::vector<pugi::xml_node> nodes;

/**
 * Map all xmi id to the corresponding xml_node for later references.
 */
struct simple_walker : pugi::xml_tree_walker {
    virtual bool for_each(pugi::xml_node &node) {
        // for (int i = 0; i < depth(); ++i) std::cout << "  "; // indentation
        // std::cout << "name=" << node.name() << "\n";

        if (!node.attribute("xmi:id").empty()) {
            xml_nodes[node.attribute("xmi:id").value()] = node;
        }
        auto type = node.attribute("xmi:type").value();
        if (!strcmp(type, "uml:Class") || !strcmp(type, "uml:Interface")) {
            nodes.emplace_back(node);
        }

        return true;  // continue traversal
    }
};

void XMIParser::parse_class(pugi::xml_node &cur, Graph &gcdr) {
    // multi inheritance ignored
    for (auto child : cur.children()) {
        if (!strcmp(child.name(), "generalization")) {
            auto father_id = child.attribute("general").value();
            auto father = xml_nodes[father_id];
            auto &e = gcdr.edge(node_map[cur], node_map[father]);
            e *= Relation::Inheritance;
        }
        else if (!child.attribute("association").empty()) {
            auto ass = child.child("type").attribute("xmi:idref").value();
            // TODO: Add Aggregation and Dependency
            auto &e = gcdr.edge(node_map[cur], node_map[xml_nodes[ass]]);
            e *= Relation::Association;
        }
    }
}

Graph XMIParser::parse(const char *file_path) {
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    std::cout << "Load result: " << result.description() << std::endl;
    std::cout << "XMI version: "
              << doc.child("xmi:XMI").attribute("xmi:version").value()
              << std::endl;

    auto model = doc.child("xmi:XMI").child("uml:Model");

    simple_walker walker;
    doc.traverse(walker);
    // for (auto it : xml_nodes) {
    //     std::cout << it.first << " -- " << it.second.name() << std::endl;
    // }

    Graph gcdr_system(nodes.size());

    int i = 0;
    for (auto child : nodes) {
        auto &node = gcdr_system.node(i);
        node.id = child.attribute("xmi:id").value();
        node.name = child.attribute("name").value();
        node.visibility = Node::get_vis(child.attribute("visibility").value());
        node.isAbstract = child.attribute("isAbstract") ? true : false;

        node_map[child] = i;
        ++i;
    }

    // out-class relation
    for (auto child : nodes) {
        auto type = child.attribute("xmi:type").value();
        if (!strcmp(type, "uml:Realization")) {
            auto client = child.attribute("client").value();
            auto supplier = child.attribute("supplier").value();
            auto &e = gcdr_system.edge(node_map[xml_nodes[client]],
                                       node_map[xml_nodes[supplier]]);
            e *= Relation::Inheritance;
        }
        // Association ? Currently, not here.
        // in-class property relations
        parse_class(child, gcdr_system);
    }

    gcdr_system.print_gcdr();

    return gcdr_system;
}
