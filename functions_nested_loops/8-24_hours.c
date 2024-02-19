#include "main.h"

/**
 * jack_bauer - check the code
 * aaaa
 */

void jack_bauer(void)
{
int hora1, hora2;
for (hora1 = 0; hora1 < 24; hora1++)
{
for (hora2 = 0; hora2 < 60; hora2++)
{
_putchar((hora1 / 10) + '0');
_putchar((hora1 % 10) + '0');
_putchar(':');
_putchar((hora2 / 10) + '0');
_putchar((hora2 % 10) + '0');
_putchar('\n');
}
}
}

