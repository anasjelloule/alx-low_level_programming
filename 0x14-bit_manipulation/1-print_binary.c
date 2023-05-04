#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  print_binary - function that prints the binary representation of a number
 * @n: Number to convert
 * Return: unsigned integer
 */
void print_binary(unsigned long int n)
{
int anas = (int)n;
if (anas > 1)
print_binary(n >> 1);

printf("%d", anas & 1);
}
