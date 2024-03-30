#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - retorna el nodo nth de la lista
 * @head: nodo head
 * @index: index
 * Return: null o los nodos
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
while (head != NULL)
{
if (count == index)
{
return (head);
}
count++;
head = head->next;
}
return (NULL);
}
