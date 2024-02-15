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
int numascii;
for (numascii = 48; numascii <= 57; numascii++)
putchar(numascii);
putchar('\n');
return (0);
}
