#include "node.h"
#include "buildTree.h"
#include "traversals.h"

void traverseInorder(Tree* root)
{
  if (root == NULL) {
    return;
  }
  else {
    traverseInorder(root->left);
    printf("%d:%d:%d\n", root->key, root->numOfRepeats, root->level);
    traverseInorder(root->right);
  }
}

void traversePreorder(Tree* root)
{
  if (root == NULL) {
    return;
  }
  else {
    printf("%d\n", root->key);
    traversePreorder(root->left);
    traversePreorder(root->right);
  }
}

void traversePostorder(Tree* root)
{
  if (root == NULL) {
    return;
  }
  else {
    traversePostorder(root->left);
    traversePostorder(root->right);
    printf("%d\n", root->key);
  }
}
