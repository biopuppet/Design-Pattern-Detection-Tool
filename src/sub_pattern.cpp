#include "sub_pattern.hpp"

SubPattern *SubPattern::createSubPattern(const SubPattern &src) {
    switch (src.type()) {
    case SPT_ICA:
        return new ICA();
    case SPT_CI:
        return new CI();
    case SPT_NONE:
    default:
        return nullptr;
    }
}
