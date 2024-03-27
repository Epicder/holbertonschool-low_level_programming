#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - printea todos los elementos de la lista dlistint
 * @h: lista
 * Return: elementos seguido del contador
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%i\n", h->n);
count += 1;
h = h->next;
}
return (count);
}
