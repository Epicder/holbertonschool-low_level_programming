#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - muestra la cantidad de elementos en dlistint_t
 * @h: dlistint_h
 * Return: cantidad de elementos
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count += 1;
h = h->next;
}
return (count);
}
