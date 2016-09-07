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
     int i;
     printf("The command line arguments are: \n");
     for (i = 1; i < argc; i++) {
      printf("%s ", argv[i]);
     }
     printf("\n");

     FILE* fp = fopen(argv[1], "r");
     Node* root;
     int j;

     fscanf (fp, "%d", &j);
     while (!feof (fp))
     {
       printf ("%d\n", j);
       fscanf (fp, "%d", &j);
     }
     fclose (fp);
   }
}
