#include <stdio.h>
/**
 * main - printea los argumentos dados
 * @argc: cantidad de argumentos
 * @argv: valor de cada argumento
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
