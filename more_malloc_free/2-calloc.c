#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb
 * @nmemb: nro de elementos
 * @size: tamanio de cada elemento
 * Return: puntero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *puntero;
 char *tmp;
if (size == 0)
{
return (NULL);
}
if (nmemb == 0)
{
return (NULL);
}
puntero = malloc(nmemb * size);
if (puntero == NULL)
{
return (NULL);
}
tmp = puntero;
 for (i = 0; i < nmemb * size; i++)
{
tmp[i] = '\0';
}
return (puntero);
}
