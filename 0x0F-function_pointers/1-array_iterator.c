#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
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
unsigned int i;
if (array == NULL || action == NULL)
exit(98);
for (i = 0; i < size; i++)
action(array[i]);
}
