#include <stdio.h>

/**
 * main - printea la cantidad de argumentos
 * @argc: cantidad de argumentos
 * @argv: no utilizado
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
