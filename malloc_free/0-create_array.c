#include "main.h"
#include <stdlib.h>
/**
 * create_array - crea un array de chars
 * @size: tamanio del array
 * @c: array
 * Return: NULL o el array
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i = 0;
  char *array;
  if (size == 0)
    {
      return (NULL);
    }
array = (char *)malloc(size * sizeof(char));

 if (array == NULL)
   {
     return (NULL);
   }

 for (i = 0; i < size; i++)
   {
     array[i] = c;   
   }
 return (array);
}
