#include "main.h"
/**
 * leet - convierte una string con leet
 * @str: string a ser convertida
 * Return: string con caracteres reemplazados
 */
char *leet(char *str)
{
int i = 0;
int j;
char chars[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[i])
{
for (j = 0; j <= 7; j++)
{
if (str[i] == chars[j] || str[i] - 32 == chars[j])
str[i] = j + '0';
}
i++;
}
return (str);
}
