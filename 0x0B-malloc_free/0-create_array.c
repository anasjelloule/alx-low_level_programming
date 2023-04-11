#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  create_array - Create Array
 * @size: Size of the array
 * @c:char to initialize
 * Return: NULL if size is 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *array;
int i, j = size == 0 ? 0 : size;
if (size == 0)
return (NULL);
array = (char *)malloc(size * sizeof(char));
*array = c;
for (i = 0; i < j; i++)
array[i] = c;
return (array);
}
