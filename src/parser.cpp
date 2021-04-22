#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

static std::map<pugi::xml_node, size_t> node_map;
static std::unordered_map<std::string, pugi::xml_node> xml_nodes;
static std::vector<pugi::xml_node> nodes;
static std::vector<pugi::xml_node> realizations;
static std::vector<pugi::xml_node> deps;
static std::map<std::string, size_t> class_map;

static Visibility get_vis(const char *s) {
  if (!strcmp(s, "public"))
    return Visibility::PUBLIC;
  else if (!strcmp(s, "protected"))
    return Visibility::PROTECTED;
  else if (!strcmp(s, "private"))
    return Visibility::PRIVATE;
  else
    return Visibility::PRIVATE;
}

/**
 * Map all xmi id to the corresponding xml_node for later references.
 * TODO: Make this struct a friend of XMIParser so that
 * it can use static maps of XMIParser.
 */
struct simple_walker : pugi::xml_tree_walker {
  virtual bool for_each(pugi::xml_node &node) {
    // for (int i = 0; i < depth(); ++i) std::cout << "  "; // indentation
    // std::cout << "name=" << node.name() << "\n";

    if (!node.attribute("xmi:id").empty()) {
      xml_nodes[node.attribute("xmi:id").value()] = node;
    }
    auto type = node.attribute("xmi:type").value();
    if (!strcmp(type, "uml:Class") || !strcmp(type, "uml:Interface")) {
      nodes.emplace_back(node);
    } else if (!strcmp(type, "uml:Realization")) {
      realizations.emplace_back(node);
    } else if (!strcmp(type, "uml:Dependency")) {
      deps.emplace_back(node);
    }
    return true;  // continue traversal
  }
};

Parameter *XMIParser::parse_parameter(pugi::xml_node &cur) {
  auto id = cur.attribute("xmi:id").value();
  auto name = cur.attribute("name").value();
  auto direction = strcmp("return", cur.attribute("direction").value())
                       ? Parameter::IN
                       : Parameter::RETURN;

  std::string type_str = cur.attribute("type").value();
  auto type = Parameter::Type::Void;

  if (type_str.substr(0, 7) == "EAJava_") {
    type_str = type_str.substr(7);
    // std::cout << type_str << std::endl;
    if (type_str == "void") {
      type = Parameter::Void;
    } else if (type_str == "String__") {
      type = Parameter::Java_String;
    } else {
      type = Parameter::Java_Class;
    }
  }
  return new Parameter(id, name, type_str, type, direction);
}

Method *XMIParser::parseMethod(pugi::xml_node &cur, size_t curidx) {
  auto node = new Method();
  node->id = cur.attribute("xmi:id").value();
  node->name = cur.attribute("name").value();
  node->visibility = get_vis(cur.attribute("visibility").value());
  node->isAbstract = cur.attribute("isAbstract") ? true : false;
  for (auto &child : cur.children()) {
    auto p = parse_parameter(child);
    if (p->direction == Parameter::RETURN &&
        p->type_ == Parameter::Java_Class) {
      auto &ass = class_map[p->type_str];
      gcdr_->addAssociation(curidx, ass);
    }
    node->params.emplace_back(p);
  }
  return node;
}

void XMIParser::parse_class(pugi::xml_node &cur) {
  // multi inheritance ignored
  auto &node = gcdr_->node(node_map[cur]);
  curnode_ = &node;
  for (auto &child : cur.children()) {
    if (!strcmp(child.name(), "ownedOperation")) {
      node.methods.push_back(parseMethod(child, node_map[cur]));
    } else if (!strcmp(child.name(), "ownedAttribute")) {
      if (!child.attribute("association").empty()) {
        auto ass = child.child("type").attribute("xmi:idref").value();
        if (!strcmp("shared", child.attribute("aggregation").value())) {
          gcdr_->addAggregationSafe(node_map[cur], node_map[xml_nodes[ass]]);
        } else {
          gcdr_->addAssociationSafe(node_map[cur], node_map[xml_nodes[ass]]);
        }
      }
    } else if (!strcmp(child.name(), "generalization")) {
      auto father_id = child.attribute("general").value();
      auto father = xml_nodes[father_id];
      gcdr_->addInheritanceSafe(node_map[cur], node_map[father]);
    }
  }
}

Graph &XMIParser::parse() {
  pugi::xml_document doc;
  pugi::xml_parse_result result = doc.load_file(xmi_.c_str());

  std::cout << "XMI file <" << xmi_ << "> Load result: " << result.description()
            << std::endl;
  std::cout << "XMI version: "
            << doc.child("xmi:XMI").attribute("xmi:version").value() << "\n\n";

  simple_walker walker;
  doc.traverse(walker);

  gcdr_ = new Graph(nodes.size());

  int i = 0;
  for (auto &child : nodes) {
    auto &node = gcdr_->node(i);
    node.id_ = child.attribute("xmi:id").value();
    node.name_ = child.attribute("name").value();
    node.visibility_ = get_vis(child.attribute("visibility").value());
    node.isAbstract_ = child.attribute("isAbstract") ? true : false;

    node_map[child] = i;
    class_map[node.name_] = i;
    ++i;
  }

  // out-class relations
  for (auto &r : realizations) {
    auto client = r.attribute("client").value();
    auto supplier = r.attribute("supplier").value();
    gcdr_->addInheritanceSafe(node_map[xml_nodes[client]],
                              node_map[xml_nodes[supplier]]);
  }

  for (auto &r : deps) {
    auto client = r.attribute("client").value();
    auto supplier = r.attribute("supplier").value();
    // std::cerr << xml_nodes[client].attribute("name").value() << std::endl;
    // std::cerr << xml_nodes[supplier].attribute("name").value() << std::endl;
    // std::cerr << node_map[xml_nodes[client]] << std::endl;
    // std::cerr << node_map[xml_nodes[supplier]] << std::endl;
    gcdr_->addDependencySafe(node_map[xml_nodes[client]],
                             node_map[xml_nodes[supplier]]);
  }

  // in-class property relations
  for (auto &child : nodes) {
    parse_class(child);
  }

  gcdr_->print_gcdr();

  return *gcdr_;
}
