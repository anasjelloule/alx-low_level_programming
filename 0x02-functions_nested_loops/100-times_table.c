#include <stdio.h>
#include "main.h"
/**
 * print_times_table - times_table
 * @n: first int
 * Return: Void
 */
void print_times_table(int n)
{
int i, j, m, c = 0;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
m = j * i;
if (m / 10 < 1 && c > 0)
putchar(' ');
if (m / 100 < 1 && c > 0)
putchar(' ');
if (m / 1000 < 1 && c > 0)
putchar(' ');

c++;
printf("%d", m);
if (j < n)
{
putchar(',');
putchar(' ');
}
}
c = 0;
putchar('\n');
}
}
