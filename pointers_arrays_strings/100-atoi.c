#include "main.h"
/**
 * _atoi - convierte uuna string a un integral
 * @s: string a ser convertida
 * Return: Always 0.
 */
int _atoi(char *s)
{
  int i;
  int a = 0;
  int num;
  while (s[a] != '\0')
    {
      a++;
    }
  for (i = 0; i < a; i++)
    {
num = num * 10 + (s[i] - 48);
}
  if (num >= 0)
    {
      return (num);
    }
  else if (num < 0)
    {
      return (-num);
    }
  return (0);
}
