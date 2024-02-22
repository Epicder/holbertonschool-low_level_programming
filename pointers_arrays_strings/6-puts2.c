#include "main.h"
/**
 * puts2 - printea solo los numeros par
 * @str: la string que contiene los nums
 * Return: Always 0.
 */
void puts2(char *str)
{
  int a = 0;
  while (str[a] != '\0')
    {
      a++;
    }
for (; *str != '\0'; str += 2)
{
  if (str[a] != 1 && 3 && 5 && 7 && 9)
    {
      _putchar(*str);
    }
}
_putchar('\n');
}
