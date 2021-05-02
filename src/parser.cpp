#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <string>
#include <map>

#include "Java8Lexer.h"
#include "Java8Parser.h"
#include "antlr4-runtime.h"

using namespace antlr4;
using namespace antlrcpptest;

static std::vector<Node *> nodes;
static const std::map<const std::string, Modifier> modifiers = {
  {"public", M_PUBLIC},
  {"protected", M_PROTECTED},
  {"private", M_PRIVATE},
  {"static", M_STATIC},
  {"abstract", M_ABSTRACT},
};

// static Modifier get_vis(const char *s) {
//   if (!strcmp(s, "public"))
//     return Modifier::PUBLIC;
//   else if (!strcmp(s, "protected"))
//     return Modifier::PROTECTED;
//   else if (!strcmp(s, "private"))
//     return Modifier::PRIVATE;
//   else
//     return Modifier::PRIVATE;
// }

void DpdtJava8Listener::enterNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *ctx)
{
  std::cout << ctx->getText() << std::endl;
  auto interval = ctx->getSourceInterval();
  std::cout << interval.toString() << std::endl;
  auto ident = ctx->Identifier()->getText();
  QualType qual;
  for (const auto &it : ctx->interfaceModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      qual.setType(modifiers.at(mod));
    }
  }
  if (ctx->extendsInterfaces()) {
    auto parents = ctx->extendsInterfaces()->interfaceTypeList()->interfaceType();
    for (const auto &parent : parents) {
      std::cout << "Parent: " << parent->getText() << std::endl;
    }
  }
  // std::cout << qual << std::endl;
  auto node = new Node(ident, qual);
  nodes.emplace_back(node);
}

void DpdtJava8Listener::exitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *ctx)
{

}


Graph &SrcParser::parse() {
  std::ifstream stream;
  stream.open(src_);

  ANTLRInputStream input(stream);
  Java8Lexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  Java8Parser parser(&tokens);

  // Java8Parser::CompilationUnitContext *cu = parser.compilationUnit();
  // std::cout << cu->toStringTree(&parser, true) << std::endl;

  DpdtJava8Listener listener;
  tree::ParseTree *tree = parser.compilationUnit(); 
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  stream.close();
  gcdr_ = new Graph(4);
  return *gcdr_;
}
