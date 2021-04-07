#include <iostream>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>
#include <boost/graph/properties.hpp>
#include <boost/property_map/property_map.hpp>
#include <unordered_map>
#include <map>
#include <string>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "parser.hpp"

std::map<pugi::xml_node, vertex_descriptor_t> node_map;
std::unordered_map<std::string, pugi::xml_node> xml_nodes;

struct simple_walker : pugi::xml_tree_walker {
    virtual bool for_each(pugi::xml_node &node) {
        // for (int i = 0; i < depth(); ++i) std::cout << "  "; // indentation
        // std::cout << "name='" << node.name() << "', value='" << node.value()
        // << "'\n";

        if (!node.attribute("xmi:id").empty()) {
            xml_nodes[node.attribute("xmi:id").value()] = node;
        }

        return true;  // continue traversal
    }
};

void prepare(pugi::xml_document &doc) {
    simple_walker walker;
    doc.traverse(walker);
    // for (auto it : xml_nodes) {
    //     std::cout << it.first << " -- " << it.second.name() << std::endl;
    // }
}

void XMIParser::parse_class(Node &node, GCDR &gcdr) {
    auto cur = node.xnode;
    std::cout << cur.attribute("name").value() << std::endl;
    // multi inheritance ignored
    for (auto child : cur.children()) {
        if (!strcmp(child.name(), "generalization")) {
            auto father_id = child.attribute("general").value();
            auto father = xml_nodes[father_id];
            std::cout << "General--> " << father.attribute("name").value()
                      << std::endl;
            auto e = edge(node_map[cur], node_map[father], gcdr);
            gcdr[e.first].relation *= Relation::Inheritance;
            std::cout << "relation: " << gcdr[e.first].relation << std::endl;
        }
        else if (!child.attribute("association").empty()) {
            auto ass = child.child("type").attribute("xmi:idref").value();
            // TODO: Add Aggregation and Dependency
            auto e = edge(node_map[cur], node_map[xml_nodes[ass]], gcdr);
            gcdr[e.first].relation *= Relation::Association;
            std::cout << "relation: " << gcdr[e.first].relation << std::endl;
        }
    }
    // auto gen = cur.child("generalization");
    // if (!gen.empty()) {

    // }
}

GCDR XMIParser::parse(const char *file_path) {
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    std::cout << "Load result: " << result.description() << std::endl;
    std::cout << "XMI version: "
              << doc.child("xmi:XMI").attribute("xmi:version").value()
              << std::endl;

    auto model = doc.child("xmi:XMI").child("uml:Model");

    prepare(doc);

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
        std::cout << "node : " << child.attribute("name").value() << "\n";
        // auto node = boost::add_vertex(Node(child), gcdr_system);
        Node::adapt_node(gcdr_system[i], child);

        // Keep a handle of xml_node in every graph node
        gcdr_system[i].xnode = child;

        node_map[child] = i;
        ++i;
    }

    // std::cout << gcdr_system.get_edge(3, 2).second.relation << std::endl;
    std::cout << "vertex num: " << num_vertices(gcdr_system) << std::endl;

    // Complete the graph
    for (int i = 0; i < class_num; ++i) {
        for (int j = 0; j < class_num; ++j) {
            add_edge(i, j, Relation::None, gcdr_system);
        }
    }

    // out-class relation
    for (auto child : package.children()) {
        auto type = child.attribute("xmi:type").value();
        if (!strcmp(type, "uml:Realization")) {
            auto client = child.attribute("client").value();
            auto supplier = child.attribute("supplier").value();
            auto e = edge(node_map[xml_nodes[client]],
                          node_map[xml_nodes[supplier]], gcdr_system);
            gcdr_system[e.first].relation *= Relation::Inheritance;
        }
        // Association ? Currently, not here.
    }

    // in-class property relations
    for (int i = 0; i < class_num; ++i) {
        parse_class(gcdr_system[i], gcdr_system);
    }

    print_gcdr(gcdr_system);
    // for (auto child : package.children()) {
    //     if (child.attribute("name").empty()) continue;
    //     ++i;
    // }
    return gcdr_system;
}
