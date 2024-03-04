#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
  int a;
  int b;
  char *concatenado;
  int i;
  int o;
  if (s1 == NULL)
    {
      s1 = "";
    }
  if (s2 == NULL)
    {
      s2 = "";
    }
  while (s1[a] != '\0')
    {
      a++;
    }
  while (s2[b] != '\0')
    {
      b++;
    }
  concatenado = (char *)malloc(a + b + 1);
    if (concatenado == NULL)
      {
	return (NULL);
      }
  for (i = 0; i < a ; i++)
    {
      concatenado[i] = s1[i];
    }
  for (o = 0; o < b; o++)
    {
      concatenado[a + b] = s2[i];
    }
  return (concatenado); 
}
