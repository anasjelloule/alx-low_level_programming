#include "main.h"
#include <stdio.h>
/**
 * times_table - times_table
 *
 * Return: Void
 */
void times_table(void)
{
int i, j, m;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
m = j * i;
printf("%d", m);
if (j < 9)
{
putchar(',');
if (m < 10)
{
putchar(' ');
putchar(' ');
}
else
putchar(' ');
}
}
putchar('\n');
}
}
