#include <stdio.h>
#include "main.h"
/**
 * times_table - times_table
 *
 * Return: Void
 */
void times_table(void)
{
int i, j, m, c = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
m = j * i;
if (m / 10 < 1 && c > 0)
putchar(' ');
c++;
printf("%d", m);
if (j < 9)
{
putchar(',');
putchar(' ');
}
}
c = 0;
putchar('\n');
}
}
