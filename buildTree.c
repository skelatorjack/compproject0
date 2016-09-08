#include "node.h"
#include "buildTree.h"

Tree* buildTree(FILE* file, int count)
{
  int j;
  Tree* root = NULL;

  printf("Inserting values into the tree: \n");

  int values[count];
  int i = 0;
  int t;
  int l;
  int z;
  fscanf(file, "%d", &j);
  while (!feof (file)) {
    printf("%d ", j);
    printf("Index = %d\n", i);
    values[i] = j;
    i++;
    fscanf(file, "%d", &j);
  }
  printf("Count = %d\n", count);
  //printf("Index = %d\n", i);
  for (z = 0; z < count; z++) {
    printf("%d\n", values[z]);
  }

  for (t = 0; t < count; t++) {
    root = insertIntoTree(root, values[t]);
  }
  //printf("The level of %d %d\n", 10, getLevel(root, 10, 0));
  printf("\n");
  return root;
  //fclose (fp);
}
Tree* insertIntoTree(Tree* node, int data)
{

  if (node == NULL) {
    node = createNewNode(data);
  }
  // if the node to be inserted is greater than the current data
  else if (node->key < data) {
    node->right = insertIntoTree(node->right, data);
  }
  // if the current node to be inserted is less than the current data
  else if (node->key > data) {
    node->left = insertIntoTree(node->left, data);
  }
  else {
    node->numOfRepeats++;
  }
  return node;
}
Tree* createNewNode(int data)
{
  Tree* node = malloc(sizeof(Tree));
  node->key = data;
  node->numOfRepeats = 0;
  node->left = NULL;
  node->right = NULL;

  return node;
}
int getLevel(Tree* node, int data, int level)
{
  printf("Key: %d, %d\n", node->key, level);

  if (node == NULL) {
    return 0;
  }

  if(node->key == data) {
    return level;
  }
  
  int result = getLevel(node->left, data, level + 1);
  if (result != 0) {
    return result;
  }
  result = getLevel(node->right, data, level + 1);
  return result;
}
