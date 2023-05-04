#include "main.h"
/**
 *  flip_bits -  Flip
 * @n: Number
 * @ù:  to set the value at indices start at 0.
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int anas = n ^ m, anas2 = 0;

while (anas > 0)
{
anas2 += (anas & 1);
anas >>= 1;
}
return (anas2);
}
