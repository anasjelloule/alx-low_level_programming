#include "main.h"
/**
 * print_triangle - print_triangle
 *
 * @size: number of # to print
 * Return: Always 0.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
int i, j, k = 0;
for (i = 0; i <= size; i++)
{
for (j = 0; j < size - i; j++)
_putchar(' ');
for (j = 0; j < i; j++)
_putchar('#');
_putchar('\n');
}
}
