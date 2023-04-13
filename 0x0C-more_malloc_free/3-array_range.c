#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  ccreate array range
 * @min: min
 * @max: max
 * Return: NULL if size is 0 or pointer to arrya range
 */
int *array_range(int min, int max)
{
int *check;
int i, j;

if (min > max)
return (NULL);
j = 0;
for (i = min; i <= max; i++)
j++;
check = (int *)malloc(j * sizeof(int));
if (check == NULL)
return (NULL);
i = 0;
while (min <= max)
{
check[i] = min;
i++;
min++;
}
return (check);
}
