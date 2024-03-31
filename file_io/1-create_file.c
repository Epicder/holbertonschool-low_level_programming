#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - crea un archivo
 * @filename: nombre
 * @text_content: texto
 * Return: 1 si funciona
 */
int create_file(const char *filename, char *text_content)
{
int opn;
if (!filename)
{
return (-1);
}
opn = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (opn == -1)
{
return (-1);
}
if (text_content)
{
write(opn, text_content, _strlen(text_content));
close(opn);
}
return (1);
}

/**
 * _strlen - guarda la longitud de una string
 * @str: string
 * Return: len
 */
int _strlen(const char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}
