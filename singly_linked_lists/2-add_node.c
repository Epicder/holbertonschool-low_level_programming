#include <stdlib.h>
#include "lists.h"
#include <string.h>
int _strlen(const char *str);
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
nodo = malloc(sizeof(list_t));
if (!nodo)
{
return (NULL);
}
nodo->str = strdup(str);
nodo->len = _strlen(str);
nodo->next = *head;
*head = nodo;
return (nodo);
}

/**
 * _strlen - guarda la longitud de una string
 * @str: string
 * Return: len
 */
int _strlen(const char *str)
{
  int len = 0;
  while (str[len] != '\0')
    {
      len++;
    }
  return(len);
}
