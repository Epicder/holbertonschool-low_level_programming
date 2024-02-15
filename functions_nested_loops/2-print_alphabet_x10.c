#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a = 0;
  char abc;
  while (a < 10){
      a++;

      for (abc = 'a'; abc <= 'z'; abc++)
        {
          _putchar(abc);
        }
      _putchar('\n');
}
}
