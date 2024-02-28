#include <stdio.h>

/**
 * main - printea el nombre del archivo
 * @argv: nombre del archivo
 * @argc: cantidad de argumentos
 * Return: Nombre del archivo
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
