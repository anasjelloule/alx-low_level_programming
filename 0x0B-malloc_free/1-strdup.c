#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  _strdup - function returns a pointer to a new string
 * @str: Size of the array
 * Return: NULL if size is 0 or pointer to the str
 */
char *_strdup(char *str)
{
char *array;
int i, size = 0;
if (str == NULL)
return (NULL);
for (size = 0; str[size] != '\0'; size++)
{
}
array = (char *)malloc(++size * sizeof(char));
if (array == 0)
return (NULL);
for (i = 0; i < size; i++)
array[i] = str[i];
array[i] = '\0';
return (array);
}
