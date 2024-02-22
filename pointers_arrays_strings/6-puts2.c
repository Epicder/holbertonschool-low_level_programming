#include "main.h"
/**
 * puts2 - printea solo los numeros par
 * @str: la string que contiene los nums
 * Return: Always 0.
 */
void puts2(char *str)
{
  int b = 0; 
  int a = 0;
  while (str[a] != '\0')
    {
      a++;
    }
for (b = 0; b < a; b += 2)
{
  if (str[a] != 1 && 3 && 5 && 7 && 9)
    {
     _putchar(str[a]);
    }
 }  
_putchar('\n');
}
