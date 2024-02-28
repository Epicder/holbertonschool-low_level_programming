#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
return (0);
}
i++;
return (1) +_strlen_recursion(s + 1);
}
