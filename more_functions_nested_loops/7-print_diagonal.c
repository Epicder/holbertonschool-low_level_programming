#include "main.h"
/**
 * print_diagonal - check the code
 * @n: variable q controla la condicion
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
int a;
for (i = 0; i < n; i++)
{
for (a = 0; a < n; a++)
{
if (a == i)
_putchar('\\');
else if (a < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
