#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - aniade un nuevo nodo
 * @head: el primer nodo
 * @: el value del nodo
 * Return: nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node;
if (!head)
{
return (NULL);
}
node = malloc(sizeof(dlistint_t));
if (!node)
{
return (NULL);
}
node->n = n;
node->next = *head;
*head = node;
return (node);
}
