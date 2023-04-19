#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a function
 * @size: size of the array
 * @array: array of function to execute
 * @action: function to execute
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i, sz = (int)size;
if (size && action != NULL)
for (i = 0; i < sz; i++)
action(array[i]);
}
