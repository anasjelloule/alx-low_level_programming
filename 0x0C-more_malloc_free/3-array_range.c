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
int i;
if (min > max)
return (NULL);
check = (int *)malloc((max - min + 1) * sizeof(int));
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
