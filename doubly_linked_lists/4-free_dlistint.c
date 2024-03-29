#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - libera la lista
 * @head: nodo head
 *
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
while (head)
{
tmp = head;
head = head->next;
free(tmp);
}
}
