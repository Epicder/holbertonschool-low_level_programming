#include "main.h"
/**
 * _strchr - encuentra un caracter en una string
 * @s: string a ser analizada
 * @c: caracter a ser buscado
 * Return: depende si encuentra el caracter o no
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return ('\0');
}
