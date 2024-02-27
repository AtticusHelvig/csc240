#ifndef SCOPE_TREE_H
#define SCOPE_TREE_H

#include "variable.h"

typedef struct ScopeTree ScopeTree;
struct ScopeTree {
  Variable variable;
  ScopeTree *left, *right;
};

#endif