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
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %s\n", d->age ? d->age : "(nil)");
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");    
}
