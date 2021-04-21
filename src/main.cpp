#include <iostream>
#include <string>

#include "argh.h"
#include "parser.hpp"
#include "pattern_analyzer.hpp"
#include "pugixml.hpp"
#include "sp_detector.hpp"

static std::string pattern;
static std::string xmi_file;

static void print_usage(const char *argv0) {
  printf(
      "Usage: %s [option...] [XMI file]\n"
      "Options:\n"
      " -p <adapter/...>  Select which design pattern to match.\n"
      " --dump-gcdr       Dump Graph graph.\n"
      " -h, --help        Display this information.\n"
      " --version         Display version.\n",
      argv0);
}

static void print_version() {
  puts(
      "DPDT(Design Pattern Detection Tool) v0.1 \n"
      "Copyright (C) 2021 Liu Fengbo <biopuppet@outlook.com>");
}

static int parse(int argc, char *argv[]) {
  argh::parser cmdl({"-v", "--version", "-h", "--help", "-p"});
  cmdl.parse(argc, argv, argh::parser::PREFER_PARAM_FOR_UNREG_OPTION);

  if (cmdl[{"-v", "--version"}]) {
    print_version();
    return 2;
  } else if (cmdl[{"-h", "--help"}]) {
    print_usage(argv[0]);
    return 1;
  }

  else {
    auto p = cmdl("-p");
    p >> pattern;
  }

  if (cmdl.pos_args().size() <= 1) {
    fputs("No input XMI file.\n", stderr);
    return -1;
  }

  /* TODO: Add multi xmi file support? */
  for (auto &pos_arg : cmdl) {
    xmi_file = pos_arg;
  }

  return 0;
}

int main(int argc, char **argv) {
  if (parse(argc, argv)) return 0;

  XMIParser parser{xmi_file};
  Graph &system = parser.parse();

  SubPatternDetector spd{system};
  spd.detect_all();

  auto pa = PatternAnalyzer::createPatternAnalyzer(spd, pattern);
  pa->struct_analyze();
  pa->behavioral_check();
  delete pa;

  return 0;
}