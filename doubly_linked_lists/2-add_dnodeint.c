#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - aniade un nuevo nodo
 * @head: el primer nodo
 * @n: el value del nodo
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
node->prev = NULL;
if (!*head)
{
node->next = NULL;
*head = node;
}
else
{
node->next = *head;
(*head)->prev = node;
*head = node;
}
return (node);
}
