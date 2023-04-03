#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - writes the character c to std
 * @s: string to modify
 * @b: char to set
 * @n: nombre to go into
 * Return: 1 or 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
