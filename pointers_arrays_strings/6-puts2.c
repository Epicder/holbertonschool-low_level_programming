#include "main.h"
/**
 * puts2 - printea solo los numeros par
 * @str: la string que contiene los nums
 * Return: Always 0.
 */
void puts2(char *str)
{
for (; *str != '\0'; str += 2)
{
_putchar(*str);
}
_putchar('\n');
}
