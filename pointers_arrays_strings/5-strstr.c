#include "main.h"

/**
 * _strstr - localiza una substring de una string
 * @haystack: needle
 * @needle: substring de haystack
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return ('\0');
}
