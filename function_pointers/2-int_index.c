#include "function_pointers.h"
/**
 * int_index - busca en un array un int
 * @array: el array
 * @size: tamanio del array
 * @cmp: puntero a la funcion
 * Return: -1 o 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
if (!array || !cmp)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
