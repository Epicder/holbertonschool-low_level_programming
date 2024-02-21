#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line 
 * @s: variable que contiene el string
 * Return: Always 0.
 */
void print_rev(char *s)
{
    for (; *s != '\0'; s--)
      {
	_putchar(*s);
      }
  _putchar('\n');
}
