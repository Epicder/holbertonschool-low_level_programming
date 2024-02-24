#include "main.h"
/**
 * _atoi - convierte uuna string a un integral
 * @s: string a ser convertida
 * Return: Always 0.
 */
int _atoi(char *s)
{
int i = 0;
int num = 0;
int signo = 1;
while (s[i] == '\0')
i++;
if (s[i] == '-')
{
signo = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
return (signo * num);
}
