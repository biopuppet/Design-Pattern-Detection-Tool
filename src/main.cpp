#include <iostream>
#include <string>

#include "argh.h"
#include "parser.hpp"
#include "pattern_analyzer.hpp"
#include "pugixml.hpp"
#include "sp_detector.hpp"

static std::string pattern;
static std::string src_file;
static bool dump_graph = false, dump_sp = false;

static void print_usage(const char *argv0) {
  printf(
      "Usage: %s [option...] [XMI file]\n"
      "Options:\n"
      " -p, --pattern <adapter/...>  Select which design pattern to match, "
      "match all on default.\n"
      " --dump-graph                 Dump GCDR graph in form of adjacent "
      "lists.\n"
      " --dump-sp                    Dump sub patterns info.\n"
      " -h, --help                   Display this information.\n"
      " -v, --version                Display version.\n",
      argv0);
}

static void print_version() {
  puts(
      "DPDT(Design Pattern Detection Tool) v0.1\n"
      "Copyright (C) 2021 Liu Fengbo <biopuppet@outlook.com>");
}

static int parse_option(int argc, char *argv[]) {
  argh::parser cmdl({"-p", "--pattern"});
  cmdl.parse(argc, argv, argh::parser::PREFER_FLAG_FOR_UNREG_OPTION);

  if (cmdl[{"-v", "--version"}]) {
    print_version();
    return 2;
  } else if (cmdl[{"-h", "--help"}]) {
    print_usage(argv[0]);
    return 1;
  }

  else {
    if (cmdl["--dump-graph"]) {
      dump_graph = true;
    }
    if (cmdl["--dump-sp"]) {
      dump_sp = true;
    }

    auto p = cmdl("-p");
    p >> pattern;
  }

  auto pas = cmdl.pos_args().size();
  if (pas <= 1) {
    std::cerr << "No input XMI file." << std::endl;
    return -1;
  }
  src_file = cmdl.pos_args()[pas - 1];

  return 0;
}

int main(int argc, char **argv) {
  if (parse_option(argc, argv)) return 0;

  SrcParser parser{src_file};
  Graph &system = parser.parse();
#if 0
  if (dump_graph) system.print_gcdr();

  SubPatternDetector spd{system, dump_sp};
  spd.detect_all();

  auto pa = PatternAnalyzer::createPatternAnalyzer(spd, pattern);
  pa->struct_analyze();
  pa->behavioral_check();
  delete pa;
#endif
  return 0;
}