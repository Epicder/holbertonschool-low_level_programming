#include "main.h"
/**
 * _strncat - concatena dos strings
 * @dest: destinatario
 * @src: fuente
 * @n: bytes
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int j;
int i = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
for (; j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
