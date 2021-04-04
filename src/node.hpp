#ifndef DPDS_NODE_H
#define DPDS_NODE_H

#include <string>

enum class Visibility {
    PUBLIC,
    PROTECTED,
    PRIVATE,
};

class Node {
public:
    const std::string id;
    std::string name;
    Visibility visibility;
    bool isAbstract;  // bit-mask?
};

#endif  // !DPDS_NODE_H