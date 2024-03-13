#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - printea una string
 * @separator: la string a ser printeada entre los nums
 * @n: cantidad de argumentos pasados
 * @...: argumentos variables pasados
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list string;
char *str;
va_start(string, n);
for (i = 0; i < n; i++)
{
str = va_arg(string, char *);
if (!str)
{
printf("(nil)");
}
printf("%s", str);
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(string);
}
