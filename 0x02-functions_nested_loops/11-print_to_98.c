#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print to 98
 *
 * @a: first int
 * Return: Void
 */
void print_to_98(int a)
{
int i;
if (a <= 98)
for (i = a; i <= 98; i++)
{
printf("%d", i);
if (i < 98)
{
printf(",");
printf(" ");
}
}
else
for (i = a; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
{
printf(",");
printf(" ");
}
}
}
