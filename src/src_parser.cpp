#include "pugixml.hpp"

#include <iostream>

int main() {
    // tag::code[]
    pugi::xml_document doc;

    pugi::xml_parse_result result = doc.load_file("../adapter3.xmi");

    std::cout << "Load result: " << result.description() << ", model name: "
              << doc.child("xmi:XMI").attribute("xmi:version").value()
              << std::endl;

    for (auto tool = doc.child("Tool"); tool;
         tool = tool.next_sibling("Tool")) {
        std::cout << "Tool " << tool.attribute("Filename").value();
        std::cout << ": AllowRemote "
                  << tool.attribute("AllowRemote").as_bool();
        std::cout << ", Timeout " << tool.attribute("Timeout").as_int();
        std::cout << ", Description '" << tool.child_value("Description")
                  << "'\n";
    }
}
