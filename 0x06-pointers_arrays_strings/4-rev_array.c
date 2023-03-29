#include "main.h"
/**
 * reverse_array -  Revers Int array
 *
 * @a: int
 * @n: int
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i, j = 0;
for (i = 0; i < n / 2; i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = j;
}
}
