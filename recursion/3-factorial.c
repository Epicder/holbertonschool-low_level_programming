#include "main.h"
/**
 * factorial - retrona factorial del numero n
 * @n: numero
 * Return: -1 si n es menor a 0.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return n * factorial(n - 1);
}
}
