#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -  executes a function
 * @size: size of the array
 * @array: array of function to execute
 * @cmp: function to execute
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i]))
return i;
return (-1);
}
