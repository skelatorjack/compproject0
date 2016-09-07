#include "node.h"
#include "traversals.h"
#include "buildTree.h"



int main(int argc, char* argv[])
{
   if (argc < 2) {
     printf("No command line arguments supplied.\n");
   }
   else if (argc > 2) {
     printf("Too many command line arguments.\n");
   }
   else {
     /*
     int i;
     printf("The command line arguments are: \n");
     for (i = 1; i < argc; i++) {
      printf("%s ", argv[i]);
     }
     */
     printf("\n");
     //printf("Size of %s is %lu\n", argv[1], strlen(argv[1]));
     char* file = (char*) malloc(strlen(argv[1]) + 5);
     file = strcat(argv[1],".data");

     FILE* fp = fopen(file, "r");

     Tree* root;
     int count = 0;
     int j;

     fscanf (fp, "%d", &j);
     while (!feof (fp))
     {
       printf("%d\n ", j);
       count++;
       //root = insertIntoTree(root, j);
       fscanf(fp, "%d", &j);
     }
     rewind(fp);

     root = buildTree(fp, count);
     fclose(fp);

     printf("\nInorder Traversal\n");
     printf("-----------------------\n");
     traverseInorder(root);

    // printf("Preorder Traversal\n");
    // printf("----------------------\n");
     //traversePreorder(root);

    // printf("Postorder Traversal\n");
     //printf("-----------------------\n");
     //traversePostorder(root);

   }
}
