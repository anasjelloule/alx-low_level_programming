#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
char *helper(char *str);
/**
 *  new_dog - New dog
 * @name:type struct dog
 * @age:type struct dog
 * @owner:type struct dog
 * Return: return 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;

new_d = (dog_t *)malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

new_d->name = helper(name);
if (!new_d->name)
{
free(new_d);
return (NULL);
}
new_d->age = age;
new_d->owner = helper(owner);
if (!new_d->owner)
{
free(new_d->name);
free(new_d);
return (NULL);
}

return (new_d);
}
/**
 * *helper - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *helper(char *str)
{
int i, j;
char *str2;

if (str == NULL)
return (NULL);
i = 0;
while (*(str + i) != '\0')
{
i++;
}

str2 = (char *)malloc(sizeof(char) * i + 1);

if (str2 == NULL)
return (NULL);

j = 0;
while (str[j] != '\0')
{
str2[j] = str[j];
j++;
}
str2[j] = '\0';
return (str2);
}
