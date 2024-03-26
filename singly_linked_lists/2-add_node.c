#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - aniade un nodo
 * @head: primer nodo
 * @str: string
 * Return: addres of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nodo;
if (!head)
{
return (NULL);
}
nodo = (list_t *)malloc(sizeof(list_t));
if (!nodo)
{
return (NULL);
}
nodo->str = strdup(str);
if (!nodo->str)
{
free(nodo);
return (NULL);
}
nodo->next = *head;
*head = nodo;
return (nodo);
}
