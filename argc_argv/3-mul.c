#include <stdio.h>
#include <stdlib.h>
/**
 * 
 *
 *
 *
 */
int main(int argc, char *argv[])
{
  int a;
  int b;
 int multi;
 if (argc != 3)
   {
     printf("Error\n");
     return (1);
   }
 a = atoi(argv[1]);
     b = atoi(argv[2]);
       multi = a * b;
     printf("%d\n", multi);
return (0);
}
 
