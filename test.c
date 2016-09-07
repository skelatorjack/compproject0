#include <stdio.h>
#include <stdlib.h> /* For exit() function*/
int main()
{
  int i = 0;
  FILE* file = fopen("something.txt", "r");

  fscanf (file, "%d", &i);
  while (!feof (file))
  {
    printf ("%d\n", i);
    fscanf (file, "%d", &i);
  }
  fclose (file);
  return 0;
}
