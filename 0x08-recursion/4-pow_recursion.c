#include "main.h"
/**
 *  _pow_recursion - Calcul Power-of x by y
 * @x: Number to calculate
 * @y: Number to calculate
 * Return: Power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (_pow_recursion(x, --y) * x);
}
