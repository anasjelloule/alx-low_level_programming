#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Spaces checked
 * @b: parameter
 * Return: 1 or 0
 */
void *malloc_checked(unsigned int b)
{
void *check = malloc(b);
if (check == NULL)
exit(98);
return (malloc(b));
}
