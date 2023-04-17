#include "dog.h"
#include <stdio.h>
/**
 *  init_dog - initialize a variable of type struct dog
 * struct dog - struct with dog info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: return 0
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
