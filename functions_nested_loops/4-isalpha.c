#include "main.h"

/**
 * _isalpha - check the code.
 * @c: verifica si la itegral se encuentra en el abcdario xdd
 * Return: Always 0.
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
