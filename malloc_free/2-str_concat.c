#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatena dos strings
 * @s1: string uno
 * @s2: string 2
 * Return: - la string concatenada o NULL
 */
char *str_concat(char *s1, char *s2)
{
int a = 0;
int b = 0;
int c;
int i;
char *concatenado;
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
c = a + b;
concatenado = (char *)malloc((sizeof(char) * c) +1);
if (concatenado == NULL)
{
return (NULL);
}
for (i = 0; i < a ; i++)
{
concatenado[i] = s1[i];
}
for (i = 0; i < b; i++)
{
concatenado[a + i] = s2[i];
}
concatenado[a + b] = '\0';
return (concatenado);
}
