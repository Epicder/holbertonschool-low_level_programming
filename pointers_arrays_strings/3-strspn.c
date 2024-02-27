#include "main.h"

/**
 * _strspn - consigue la longitud de un prefijo
 * @s: string a ser utilizada
 * @accept: valor a ser tomado
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (*s != '\0')
{
char *puntero = accept;
while (*puntero != '\0')
{
if (*s == *puntero)
{
i++;
break;
}
puntero++;
}
if (*puntero == '\0')
{
return (i);
}
s++;
}
return (i);
}
