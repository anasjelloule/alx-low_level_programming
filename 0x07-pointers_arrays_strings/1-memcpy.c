#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - writes the character c to std
 * @dest: string to cop from src
 * @src: char to copy to dest
 * @n: nombre to go into
 * Return: 1 or 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
