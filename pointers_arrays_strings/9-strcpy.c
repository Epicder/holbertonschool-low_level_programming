#include "main.h"
/**
 * _strcpy - copia una string de texto desde src a dest
 * @src: fuente inicial
 * @dest: fuente final
 * Return: devuelve dest para que printee en pantalla la frase copiada
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
 return (dest);
}
