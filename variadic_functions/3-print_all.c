#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - printea todo
 * @format: formatos posibles
 * @...: cantidad de parametros variable
 *
 */
void print_all(const char * const format, ...)
{
char *str;
unsigned int i = 0;
int separator = 0;
va_list arg;
va_start(arg, format);
while (format && format[i])
{
if (separator)
{
printf(", ");
}
if (format[i] == 'c')
{
printf("%c", va_arg(arg, int));
}
else if (format[i] == 'i')
{
printf("%i", va_arg(arg, int));
}
else if (format[i] == 'f')
{
printf("%f", va_arg(arg, double));
}
else if (format[i] == 's')
{
str = va_arg(arg, char*);
if (str)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
}
separator = 1;
i++;
}
printf("\n");
va_end(arg);
}
