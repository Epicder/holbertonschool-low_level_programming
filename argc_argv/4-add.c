#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int i;
  int suma;
    if (argc == 1)
    {
      printf("0\n");
    }
    else
      {
    for (i = 1; i < argc; i++)
	    {
          suma += atoi(argv[i]);
	    }
       printf("%d\n", suma);
      }
  return (0);
}  
