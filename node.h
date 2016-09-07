#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

struct node_t
{
  int key;
  struct tree* right;
  struct tree* left;
};

typedef struct node_t Node;

#endif
