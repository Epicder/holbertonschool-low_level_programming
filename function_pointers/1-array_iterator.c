#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iteator - executes a function given as a parameter on
 * each element of an array.
 * @array: array pasada
 * @size: tamanio del array
 * @action: el puntero a la funcion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (!array || !action)
{
return;
}
for (; size > 0; size--)
{
action(*array);
array++;
}
}
