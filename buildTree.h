#ifndef BUILDTREE_H
#define BUILDTREE_H

#include "node.h"

Tree* buildTree(FILE*, int);
Tree* insertIntoTree(Tree*, int);
Tree* createNewNode(int);
int getLevel(Tree*, int, int);

#endif
