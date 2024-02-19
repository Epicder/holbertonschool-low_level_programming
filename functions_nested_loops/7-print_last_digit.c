#include "main.h"

/**
 * print_last_digit - check the code
 * @n: el numero el cual vamos a extraer su ultimo digito
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int ultimonum;
ultimonum = n % 10;
if (ultimonum < 0)
ultimonum = -ultimonum;
_putchar(ultimonum + '0');
return (ultimonum);
}
