#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplica la string y devuelve un puntero a la nueva creada
 * @str: string a ser duplicada
 * Return: Null o S
 */
char *_strdup(char *str)
{
char *s;
int a;
int i = 1;
if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
s = malloc((sizeof(char) * i) +1);
if (s == NULL)
{
return (NULL);
}
for (a = 0; a < i; a++)
{
s[a] = str[a];
}
return (s);
}
