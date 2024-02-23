#include "main.h"
/**
 * rev_string -  da vuelta una string
 * @s: string a ser revertida
 * Return: Always 0
 */
void rev_string(char *s)
{
int l = 0;
int i = 0;
int f = l - 1;
char t;
while (s[l] != '\0')
{
l++;
}
while (i < f)
{
t = s[i];
s[i] = s[f];
s[f] = t;
s++;
f--;
}
}
