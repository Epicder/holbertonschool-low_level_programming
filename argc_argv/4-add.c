#include <stdio.h>
#include <stdlib.h>
/**
 * main - sumar argumentos dados
 * @argc: cantidad de argumentos
 * @argv: valor de lso argumentos
 * Return: 0 o 1
 */
int main(int argc, char *argv[])
{
int a;
int suma;
if (argc == 1)
{
printf("0\n");
}
else
{
for (a = 1; a < argc; a++)
{
int num = atoi(argv[a]);
if (num == 0 && *argv[a] != '0')
{
printf("Error\n");
return (1);
}
else
{
suma += atoi(argv[a]);
}
}
printf("%d\n", suma);
}
return (0);
}
