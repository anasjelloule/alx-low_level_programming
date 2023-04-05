#include "main.h"
/**
 *  helper 2 - help recurses
 * @i: Number to check
 * @n: Number to check
 * Return: O or 1
 */
int helper2(int i, int n)
{
int j;
if (i * i != n)
{
if (i > n)
{
return (-1);
}
j = helper2(i + 1, n);
return (j + 1);
}
return (0);
}
/**
 *  is_prime_number - check if n is prime
 * @n: Number to check
 * Return: O or 1
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (helper2(i, n) == n && n != 1)
return (-1);
return (helper2(i, n));
}
