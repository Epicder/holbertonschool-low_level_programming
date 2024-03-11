#include "dog.h"
#include <stdio.h>
/**
 * init_dog - inicia los valores de la estructura
 * @d: dog
 * @name: nombre
 * @age: edad
 * @owner: duenio
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
