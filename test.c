#include <stdio.h>
#include <stdlib.h> /* For exit() function*/
int main()
{
  int i = 0;
  FILE* file = fopen("something.data", "r");
  int count = 0;

  fscanf (file, "%d", &i);
  while (!feof (file))
  {
    printf ("%d\n", i);
    count++;
    fscanf (file, "%d", &i);
  }
  printf("There are %d numbers in the file something.data\n", count);
  fclose (file);
  return 0;
}
