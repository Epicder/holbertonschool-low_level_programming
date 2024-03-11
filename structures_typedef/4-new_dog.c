#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - crea una nueva estructura
 * @name: nombre
 * @age: edad
 * @owner: duenio
 * Return: puntero a la nueva estructura
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *new_dog;
new_dog = malloc(sizeof(struct dog));
if (new_dog == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
