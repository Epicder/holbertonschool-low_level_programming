#include "main.h"
/**
 * string_toupper - cambia todas las minusculas a mayusculas
 * @str: string a ser mayusculizada xD 
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;  
}
}
return (str);
}
