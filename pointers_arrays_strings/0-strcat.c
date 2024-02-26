#include "main.h"
/**
 * _strcat - check the code
 * @dest: destinatario
 * @src: fuente
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
char *a = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (a);
}
