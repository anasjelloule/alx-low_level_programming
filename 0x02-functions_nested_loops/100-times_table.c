#include "main.h"
#include <stdio.h>
/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{
int i, j;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int prod = j * i;
if (j == 0)
{
printf("0");
}
else if (prod <= 9)
{
printf(",");
printf(" ");
printf(" ");
printf(" ");
putchar('0' + prod);
}
else if (prod > 99)
{
printf(",");
printf(" ");
putchar('0' + (prod / 100));
putchar('0' + ((prod / 10) % 10));
putchar('0' + (prod % 10));
}
else
{
printf(",");
printf(" ");
printf(" ");
putchar('0' + (prod / 10));
putchar('0' + (prod % 10));
}
}
putchar('\n');
}
}
}
