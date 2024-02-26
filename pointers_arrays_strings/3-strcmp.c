#include "main.h"

/**
 * _strcmp - compara 2 strings
 * @s1: string a ser comparada
 * @s2: string a ser comparada
 * Return: 0 si son iguales
 */
int _strcmp(char *s1, char *s2)
{
  int i;
  int a;
  while (s1[i] != '\0')
    {
      i++;
    }
  while (s2[a] != '\0')
    {
      a++;
    }
  if (s1[i] == s2[a])
    {
      return (0);
    }
  else if (s1[i] < s2[a])
    {
      return (-1);
    }
  return (1);
}
