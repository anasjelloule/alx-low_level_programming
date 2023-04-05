#include "main.h"
/**
 *  factorial - Calcul factorial
 * @n: Number to calculate
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n > 0)
return (n * factorial(n - 1));
return (1);
}
