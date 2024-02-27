#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: retorna un puntero a s si coiniciden los bytes con accept, sino NULL
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *puntero = accept;
while (*puntero != '\0')
{
if (*s == *puntero)
{
return (s);
}
puntero++;
}
s++;
}
return ('\0');
}
