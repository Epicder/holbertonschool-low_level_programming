#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sumn_dlistint - suma todos los value de cada nodo
 * @head: nodo head
 * Return: suma
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
