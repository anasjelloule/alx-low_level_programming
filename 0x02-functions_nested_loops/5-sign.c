#include "main.h"
#include <stdio.h>
/**
 * print_sign - Check sign
 * @n: int to check
 * Return: Void
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
if (n < 0)
{
printf("-");
return (-1);
}
if (n == 0)
{
printf("0");
return (0);
 }}
