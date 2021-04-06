#include <iostream>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "parser.hpp"
#include "sp_detector.hpp"

int main(int argc, char **argv) {
    Parser parser;
    const char *file = argc > 1 ? argv[1] : "../adapter3.xmi";
    parser.parse(file);
    
    SubPatternDetector spd;
    spd.init();
    return 0;
}