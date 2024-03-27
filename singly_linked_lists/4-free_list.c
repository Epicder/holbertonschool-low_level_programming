#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - libera list_t
 * @head: primer nodo
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
free(head);
}
