#include "dog.h"
#include <stdio.h>
/**
 * print_dog - printea la structura dog
 * @d: estructura
 *
 */
void print_dog(struct dog *d)
{
  if (d == NULL)
    {
      
    }
  if (d->name == NULL)
    {
  printf("Name: (nil)\n");
  printf("Age: %f\n", d->age);
  printf("Owner: %s\n", d->owner);
    }
  else if (d->owner == NULL)
    {
printf("Name: %s\n", d->name);
  printf("Age: %f\n", d->age);
  printf("Owner: (nil)");
    }
  else
    {
  printf("Name: %s\n", d->name);
  printf("Age: %f\n", d->age);
  printf("Owner: %s\n", d->owner);
    }
}
