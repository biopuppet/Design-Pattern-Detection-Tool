#include "pugixml.hpp"

#include <iostream>

int main() {
    // tag::code[]
    pugi::xml_document doc;

    pugi::xml_parse_result result = doc.load_file("../adapter3.xmi");

    std::cout << "Load result: " << result.description()
              << ", model name: "
              << doc.child("uml:Model").attribute("name").value()
              << std::endl;
    // end::code[]
}
