#include <iostream>
#include <string>

#include "argh.h"
#include "parser.hpp"
#include "pattern_analyzer.hpp"
#include "sp_detector.hpp"

extern "C" {
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
}

static std::string pattern;
static std::vector<std::string> src_file_dirs;
static std::vector<std::string> src_files;
static bool dump_graph = false, dump_sp = false;
static bool structural = false;

static void getAllFiles(std::string path, std::vector<std::string> &files) {
  DIR *dir;
  struct dirent *ptr;
  if ((dir = opendir(path.c_str())) == NULL) {
    files.push_back(path);
    return;
  }
  while ((ptr = readdir(dir)) != NULL) {
    if (strcmp(ptr->d_name, ".") == 0 || strcmp(ptr->d_name, "..") == 0)
      continue;
    // file
    else if (ptr->d_type == 8) {
      if (!strcmp(ptr->d_name + strlen(ptr->d_name) - 5, ".java"))
        files.push_back(path + "/" + ptr->d_name);
    } else if (ptr->d_type == 10)  // link file
      continue;
    else if (ptr->d_type == 4) {
      // files.push_back(ptr->d_name);//dir
      getAllFiles(path + "/" + ptr->d_name, files);
    }
  }
  closedir(dir);
}

static void print_usage(const char *argv0) {
  printf(
      "Usage: %s [option...] [Source file/directory...]\n"
      "Options:\n"
      " -p, --pattern <adapter/...>  Select which design pattern to match, "
      "match all on default.\n"
      " --dump-graph                 Dump GCDR graph in form of adjacent "
      "lists.\n"
      " --dump-sp                    Dump sub patterns info.\n"
      " -s, --structural             Show all structural matched instances.\n"
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
    if (cmdl[{"-s", "--structural"}]) {
      structural = true;
    }

    auto p = cmdl("-p");
    p >> pattern;
  }

  auto pas = cmdl.pos_args().size();
  if (pas <= 1) {
    std::cerr << "No input XMI file." << std::endl;
    return -1;
  }
  src_file_dirs = cmdl.pos_args();
  src_file_dirs.erase(src_file_dirs.begin());
  return 0;
}

int main(int argc, char **argv) {
  if (parse_option(argc, argv)) return 0;

  for (const auto &src : src_file_dirs) {
    getAllFiles(src, src_files);
  }

  std::cout << "Total # of source files: " << src_files.size() << std::endl;
  SrcParser parser{src_files};
  auto system = parser.parse();
  if (!system) {
    return -1;
  }
  if (dump_graph) system->print();

  std::cerr << "Detecting sub-patterns..." << std::endl;
  SubPatternDetector spd{*system, dump_sp};
  spd.detect_all();

  auto pa = PatternAnalyzer::createPatternAnalyzer(spd, pattern);
  std::cerr << "Structual analyzing..." << std::endl;
  pa->struct_analyze();
  std::cerr << "Behavioral analyzing..." << std::endl;
  pa->behavioral_analyze();
  pa->print(structural);
  delete pa;

  return 0;
}