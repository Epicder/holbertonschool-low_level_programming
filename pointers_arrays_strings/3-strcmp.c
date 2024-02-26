#include "main.h"

/**
 * _strcmp - compara 2 strings
 * @s1: string a ser comparada
 * @s2: string a ser comparada
 * Return: 0 si son iguales
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return s1[i] - s2[i];
}
i++;
}
  if (s1[i] == '\0' && s2[i] == '\0')
    {
      return (0);
    }
  else if (s1[i] == '\0')
    {
      return (-1);
    }
  else
    {
      return (1);
    }
}
