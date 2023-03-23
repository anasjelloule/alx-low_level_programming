#include "main.h"
/**
 * more_numbers - more_numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int a, i;
for (i = 0; i < 10; i++)
{
for (a = 0; a <= 14; a++)
{
if (a > 9)
_putchar('1');
_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
