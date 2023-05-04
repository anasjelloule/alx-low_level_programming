#include "main.h"
#include <stdlib.h>
/**
 *  binary_to_uint - Concatenate a string
 * @b: Number arguments
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int anas = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b == '1')
anas = (anas << 1) | 1;
else if (*b == '0')
anas <<= 1;
else
return (0);
b++;
}
return (anas);
}
