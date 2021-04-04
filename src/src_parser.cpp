#include "pugixml.hpp"

#include <iostream>

int main() {
    pugi::xml_document doc;

    pugi::xml_parse_result result = doc.load_file("../adapter3.xmi");

    std::cout << "Load result: " << result.description() << ", model name: "
              << doc.child("xmi:XMI").attribute("xmi:version").value()
              << std::endl;

    auto model = doc.child("xmi:XMI").child("uml:Model");

    std::cout << "model: " << model.name() << std::endl;
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
    for (auto child : package.children()) {
        std::cout << "class name: " << child.attribute("name").value() << "\n";
    }

    // for (auto tool = doc.child("Tool"); tool;
    //      tool = tool.next_sibling("Tool")) {
    //     std::cout << "Tool " << tool.attribute("Filename").value();
    //     std::cout << ": AllowRemote "
    //               << tool.attribute("AllowRemote").as_bool();
    //     std::cout << ", Timeout " << tool.attribute("Timeout").as_int();
    //     std::cout << ", Description '" << tool.child_value("Description")
    //               << "'\n";
    // }
}
