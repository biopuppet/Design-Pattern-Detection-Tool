#include <iostream>
#include <getopt.h>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "parser.hpp"
#include "sp_detector.hpp"
#include "sfm_analyzer.hpp"

static void print_usage(const char *argv0) {
    printf("Usage: %s [option...] [XMI file]\n"
           "Options:\n"
           " -p <adapter/...>  Select which design pattern to be matched.\n"
           " --dump-gcdr       Dump Graph graph.\n"
           " -h, --help        Display this information.\n"
           " --version         Display version.\n",
           argv0);
}

static void print_version() {
    puts("DPDT(Design Pattern Detection Tool) v0.1 \n"
         "Copyright (C) 2021 Liu Fengbo <biopuppet@outlook.com>");
}

static int parse(int argc, char *argv[]) {
    while (1) {
        static const struct option long_options[] = {
            {.name = "version", .has_arg = 0, .flag = nullptr, .val = 'v'},
            {.name = "help", .has_arg = 0, .flag = nullptr, .val = 'h'},
            {.name = "pattern", .has_arg = 1, .flag = nullptr, .val = 'p'},
            {nullptr},
        };
        int c = getopt_long(argc, argv, "vhp:", long_options, NULL);
        if (c == -1)
            break;
        switch (c) {
        case 'v':
            print_version();
            return 1;
        case 'p':
            // Add pattern support
            break;
        default:  // 'help'
            print_usage(argv[0]);
            return 1;
        }
    }
    return 0;
}

int main(int argc, char **argv) {
    const char *xmi_file = nullptr;
    if (argc > 1)
        xmi_file = argv[argc - 1];
    else {
        std::cerr << "No XMI file!\n";
    }

    if (parse(argc, argv))
        return 0;

    XMIParser parser;
    Graph system = parser.parse(xmi_file);

    SubPatternDetector spd{system};
    spd.detect_all();

    SFMAnalyzer sfm_analyzer{spd};
    sfm_analyzer.analyze();

    return 0;
}