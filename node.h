#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

struct tree_t
{
  int key;
  int numOfRepeats;
  struct tree_t* right;
  struct tree_t* left;
};

typedef struct tree_t Tree;

#endif
