#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
putchar(letra);
for (letra = 'A'; letra <= 'Z'; letra++)
putchar(letra);
putchar('\n');
return (0);
}
