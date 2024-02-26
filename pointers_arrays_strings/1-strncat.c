#include "main.h"
/**
 * _strncat - concatena dos strings
 * @dest: destinatario
 * @src: fuente
 * @n: bytes
 * este codigo lo saque de hacer man strncat, entiendo la logica menos el tipo
 * de variable size_t, no se hasta que punto se pueda hacer esto?
 * Return: Always 0.
 */

char *_strncat(char *dest, const char *src, size_t n)
{
size_t dest_len = strlen(dest);
size_t i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
