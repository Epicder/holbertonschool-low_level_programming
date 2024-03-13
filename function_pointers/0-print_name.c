#include "function_pointers.h"
/**
 * print_name - printea un nombre
 * @name: nombre xd
 * @f: puntero a la funcion que printea un nombre
 * Return: nombre
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
return;
}
f(name);
}
