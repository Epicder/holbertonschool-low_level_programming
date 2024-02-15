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
char letras, e, q;
e = 'e';
q = 'q';

	for (letras = 'a'; letras <= 'z'; letras++)
	{
		if (letras != e && letras != q)
			putchar(letras);
	}
	putchar('\n');
	return (0);
}
