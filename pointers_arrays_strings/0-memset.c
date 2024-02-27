#include "main.h"
/**
 * _memset - llena la memoria con un byte constante
 * @s: puntero original
 * @b: variable que contiene las direcciones a rellenar
 * @n: numero de veces que modifiaremos la memoria
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *puntero = s;
while (n-- > 0)
{
*s++ = b; 
}
return (puntero);
}
