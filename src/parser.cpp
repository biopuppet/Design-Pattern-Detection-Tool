#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <istream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "JavaLexer.h"
#include "JavaParser.h"
#include "antlr4-runtime.h"

using namespace antlr4;

static std::vector<Node *> nodes;
static std::map<const std::string, Node *> nodemap;
static std::unordered_map<Node *, size_t> nodeidx;
static const std::map<const std::string, Modifier> modifiers = {
    {"public", M_PUBLIC}, {"protected", M_PROTECTED}, {"private", M_PRIVATE},
    {"static", M_STATIC}, {"abstract", M_ABSTRACT},   {"final", M_FINAL},
};
static const std::set<std::string> list_types = {
    "List",
    "ArrayList",
    "LinkedList",
    "Vector",
};

antlrcpp::Any DpdtJavaVisitor::visitFormalParameters(
    JavaParser::FormalParametersContext *ctx) {
  std::vector<Parameter *> params;
  if (auto fpl = ctx->formalParameterList()) {
    auto fps = fpl->formalParameter();
    for (const auto &fp : fps) {
      auto type = fp->typeType()->getText();
      auto name = fp->variableDeclaratorId()->IDENTIFIER()->getText();
      auto param = new Parameter(type, name);
      params.emplace_back(param);
    }
    if (auto fp = fpl->lastFormalParameter()) {
      auto type = fp->typeType()->getText();
      auto name = fp->variableDeclaratorId()->IDENTIFIER()->getText();
      auto param = new Parameter(type, name);
      params.emplace_back(param);
    }
  }
  return params;
}

/**
 *
 */
void DpdtJavaListener::enterTypeDeclaration(
    JavaParser::TypeDeclarationContext *ctx) {
  for (const auto &it : ctx->classOrInterfaceModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      curqual_.setType(modifiers.at(mod));
    }
  }
}

/**
 *
 */
void DpdtJavaListener::enterClassBodyDeclaration(
    JavaParser::ClassBodyDeclarationContext *ctx) {
  for (const auto &it : ctx->modifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      curqual_.setType(modifiers.at(mod));
    }
  }
}

/**
 *
 */
void DpdtJavaListener::enterInterfaceDeclaration(
    JavaParser::InterfaceDeclarationContext *ctx) {
  // std::cout << ctx->getText() << std::endl;
  // auto interval = ctx->getSourceInterval();
  // std::cout << interval.toString() << std::endl;
  auto ident = ctx->IDENTIFIER()->getText();
  if (ctx->typeParameters()) {
    ident += ctx->typeParameters()->getText();
  }
  auto node = new Node(ident, curqual_);

  if (ctx->typeList()) {
    auto parents = ctx->typeList()->typeType();
    for (const auto &parent : parents) {
      auto ps = parent->getText();
      node->addInterface(ps);
    }
  }

  nodeidx.emplace(node, nodes.size());
  nodes.emplace_back(node);
  nodemap[ident] = node;
  pushNode(node);
}

void DpdtJavaListener::exitInterfaceDeclaration(
    JavaParser::InterfaceDeclarationContext * /*ctx*/) {
  popNode();
}

void DpdtJavaListener::enterClassDeclaration(
    JavaParser::ClassDeclarationContext *ctx) {
  // std::cout << ctx->getText() << std::endl;
  // auto interval = ctx->getSourceInterval();
  // std::cout << interval.toString() << std::endl;
  auto ident = ctx->IDENTIFIER()->getText();
  if (ctx->typeParameters()) {
    ident += ctx->typeParameters()->getText();
  }

  auto node = new Node(ident, curqual_);

  if (ctx->typeType()) {
    node->setParent(ctx->typeType()->getText());
    // May be an language builtin type
  }
  if (ctx->typeList()) {
    auto parents = ctx->typeList()->typeType();
    for (const auto &p : parents) {
      auto ps = p->getText();
      node->addInterface(ps);
    }
  }
  // std::cout << qual << std::endl;
  nodeidx.emplace(node, nodes.size());
  nodes.emplace_back(node);
  nodemap[ident] = node;
  pushNode(node);
}

void DpdtJavaListener::exitClassDeclaration(
    JavaParser::ClassDeclarationContext * /*ctx*/) {
  popNode();
}

/**
 * typeType variableDeclarators ';'
 */
void DpdtJavaListener::enterFieldDeclaration(
    JavaParser::FieldDeclarationContext *ctx) {
  if (curNode() == nullptr) {
    return;
  }
  QualType qual;
  auto vards = ctx->variableDeclarators()->variableDeclarator();
  auto type = ctx->typeType()->getText();

  auto node_type = ctx->typeType()->classOrInterfaceType();
  auto builtin_type = ctx->typeType()->primitiveType();
  std::string listof;
  size_t dim = 0;
  if (builtin_type) {
    listof = builtin_type->getText();
  }
  if (node_type) {
    listof = node_type->getText();
    // node_type->typeArguments()
    for (size_t i = 0; i < node_type->IDENTIFIER().size(); ++i) {
      auto ident = node_type->IDENTIFIER(i);
      auto typeargs = node_type->typeArguments(i);
      auto idstr = ident->getText();
      // List<...>
      if (typeargs && list_types.find(idstr) != list_types.end()) {
        // TODO: Add nested type support
        // List has only 1 arg
        dim += 1;
        listof = typeargs->typeArgument()[0]->getText();
      }
    }
  }

  for (const auto &var : vards) {
    auto name = var->variableDeclaratorId()->IDENTIFIER()->getText();
    dim += var->variableDeclaratorId()->LBRACK().size();
    auto attr = new Attribute(reinterpret_cast<intptr_t>(ctx), name, type, qual,
                              listof, dim);
    curNode()->attrs_.emplace_back(attr);
  }
}

/**
 * IDENTIFIER formalParameters (THROWS qualifiedNameList)? block
 */
void DpdtJavaListener::enterConstructorDeclaration(
    JavaParser::ConstructorDeclarationContext *ctx) {
  if (curNode() == nullptr) {
    return;
  }
  std::string type = "ctor";
  auto name = ctx->IDENTIFIER()->getText();
  auto params = visitor_.visitFormalParameters(ctx->formalParameters())
                    .as<std::vector<Parameter *>>();

  auto method = new Method(ctx, Method::CtorDecl, name, curqual_, type, params);
  curNode()->ctors_.emplace_back(method);
}

/**
 * typeTypeOrVoid IDENTIFIER formalParameters ('[' ']')*
 *     (THROWS qualifiedNameList)?
 *     methodBody
 */
void DpdtJavaListener::enterMethodDeclaration(
    JavaParser::MethodDeclarationContext *ctx) {
  if (curNode() == nullptr) return;
  auto type = ctx->typeTypeOrVoid()->getText();
  auto name = ctx->IDENTIFIER()->getText();
  if (auto tt = ctx->typeTypeOrVoid()->typeType()) {
    if (tt->classOrInterfaceType()) {
      type = tt->classOrInterfaceType()->getText();
    } else {
      type = tt->primitiveType()->getText();
    }
  }

  auto params = visitor_.visitFormalParameters(ctx->formalParameters())
                    .as<std::vector<Parameter *>>();
  auto method =
      new Method(ctx, Method::MethodDecl, name, curqual_, type, params);
  curNode()->methods_.emplace_back(method);
}

/**
 * interfaceMethodModifier* (typeTypeOrVoid | typeParameters annotation*
 * typeTypeOrVoid)
 * IDENTIFIER formalParameters ('[' ']')*
 *    (THROWS qualifiedNameList)? methodBody
 */
void DpdtJavaListener::enterInterfaceMethodDeclaration(
    JavaParser::InterfaceMethodDeclarationContext *ctx) {
  if (curNode() == nullptr) return;

  // TODO: Function
  for (const auto &it : ctx->interfaceMethodModifier()) {
    const auto mod = it->getText();
    if (modifiers.count(mod)) {
      curqual_.setType(modifiers.at(mod));
    }
  }

  auto type = ctx->typeTypeOrVoid()->getText();
  auto name = ctx->IDENTIFIER()->getText();
  if (auto tt = ctx->typeTypeOrVoid()->typeType()) {
    if (tt->classOrInterfaceType()) {
      type = tt->classOrInterfaceType()->getText();
    } else {
      type = tt->primitiveType()->getText();
    }
  }

  auto params = visitor_.visitFormalParameters(ctx->formalParameters())
                    .as<std::vector<Parameter *>>();
  auto method = new Method(ctx, Method::InterfaceMethodDecl, name, curqual_,
                           type, params);
  curNode()->methods_.emplace_back(method);
}

SrcGraph *SrcParser::parse() {
  for (auto &src : srcs_) {
    std::ifstream stream;
    stream.open(src);

    try {
      ANTLRInputStream *input = new ANTLRInputStream(stream);
      JavaLexer *lexer = new JavaLexer(input);

      CommonTokenStream *tokens = new CommonTokenStream(lexer);

      // tokens.fill();

      JavaParser *parser = new JavaParser(tokens);

      // JavaParser::CompilationUnitContext *cu = parser.compilationUnit();
      // std::cout << cu->toStringTree(&parser, true) << std::endl;

      DpdtJavaListener listener;
      tree::ParseTree *tree = parser->compilationUnit();
      tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    } catch (std::exception &e) {
      fprintf(stderr, "ANTLR4 parsing error: %s\n", e.what());
      return nullptr;
    }
    stream.close();
  }
  gcdr_ = new SrcGraph(nodes);

  for (size_t i = 0; i < gcdr_->size(); ++i) {
    auto node = gcdr_->node(i);
    assert(node);
    if (nodemap.count(node->parent_name_)) {
      node->setParent(nodemap[node->parent_name_]);
    }
    for (const auto &it : node->itf_names_) {
      if (nodemap.count(it)) {
        node->addInterface(nodemap[it]);
      }
    }
    auto parent = node->getParent();
    if (parent) {
      gcdr_->addInheritance(i, nodeidx.at(parent));
    }
    for (const auto &it : node->interfaces_) {
      gcdr_->addInheritance(i, nodeidx.at(it));
    }
    for (const auto &it : node->attrs_) {
      if (nodemap.count(it->listof_) && nodeidx.count(nodemap[it->listof_])) {
        if (it->isList()) {
          gcdr_->addAggregation(i, nodeidx[nodemap[it->listof_]], it);
        } else {
          gcdr_->addAssociation(i, nodeidx[nodemap[it->listof_]], it);
        }
      }
    }

    for (const auto &it : node->methods_) {
      auto &type = it->type_;
      if (nodemap.count(type) && nodeidx.count(nodemap[type])) {
        gcdr_->addDependency(i, nodeidx[nodemap[type]]);
      }
    }
  }
  return gcdr_;
}
