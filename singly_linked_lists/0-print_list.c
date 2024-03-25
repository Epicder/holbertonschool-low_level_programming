#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - printea los elementos de una lista
 * @h: puntero a el head de la lista
 * Return: Count
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (!h->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%li] %s\n", h->len, h->str);
}
count++;
h = h->next;
}
return (count);
}
