#include "main.h"
/**
 *  helper - help recurses
 * @i: Number to check
 * @n: Number to check
 * Return: O or 1
 */
int helper(int i, int n)
{
if (n % i == 0 && n != i)
return (0);
if (n % i != 0 && i < n)
return (helper(i + 1, n));
return (1);
}
/**
 *  is_prime_number - check if n is prime
 * @n: Number to check
 * Return: O or 1
 */
int is_prime_number(int n)
{
int i = 2;
if (n < 2)
return (0);
return (helper(i, n));
}
