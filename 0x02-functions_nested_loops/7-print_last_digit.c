#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - Last digit
 * @n: int to check
 * Return: Void
 */
int print_last_digit(int n)
{
_putchar('0' + _abs(n % 10));
return (_abs(n % 10));
}
