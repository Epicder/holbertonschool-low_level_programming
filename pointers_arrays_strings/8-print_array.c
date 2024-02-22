#include "main.h"
#include <stdio.h>
/**
 * print_array - funcion la cual printea cada valor de un array
 * @a: array
 * @n: valor de la array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%i", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
