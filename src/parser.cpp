#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <cstring>
// #include <boost/graph/adjacency_matrix.hpp>

#include "pugixml.hpp"
#include "parser.hpp"

std::map<pugi::xml_node, size_t> node_map;
std::unordered_map<std::string, pugi::xml_node> xml_nodes;

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

        return true;  // continue traversal
    }
};

void XMIParser::parse_class(pugi::xml_node &cur, GCDR &gcdr) {
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

GCDR XMIParser::parse(const char *file_path) {
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
        auto type = child.attribute("xmi:type").value();
        if (!strcmp(type, "uml:Class") || !strcmp(type, "uml:Interface"))
            ++class_num;
    }

    GCDR gcdr_system(class_num);

    int i = 0;
    for (auto child : package.children()) {
        auto type = child.attribute("xmi:type").value();
        if (strcmp(type, "uml:Class") && strcmp(type, "uml:Interface"))
            continue;
        // std::cout << "node : " << child.attribute("name").value() << "\n";

        auto &node = gcdr_system.node(i);
        node.id = child.attribute("xmi:id").value();
        node.name = child.attribute("name").value();
        node.visibility = Node::get_vis(child.attribute("visibility").value());
        node.isAbstract = child.attribute("isAbstract") ? true : false;

        node_map[child] = i;
        ++i;
    }

    // out-class relation
    for (auto child : package.children()) {
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
