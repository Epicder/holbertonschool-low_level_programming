#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - localiza la memoria alocada en b
 * @b: variable para malloc
 * Return: puntero
 */
void *malloc_checked(unsigned int b)
{
void *puntero = malloc(b);
if (puntero == NULL)
{
exit(98);
}
return (puntero);
}
