#include "main.h"

/**
 * _memcpy - copia memoria
 * @src: fuente
 * @dest: destinatario
 * @n: numero de bytes a copiar
 * return: el puntero ocn la memoria guardada
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *puntero = dest;
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (puntero);
}
