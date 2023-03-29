#include "main.h"
/**
 * _strncat -  Concat String
 *
 * @dest: string
 * @src: string
 * @n: int
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j = 0;
for (i = 0; dest[i] != '\0'; i++)
{
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
++i;
j++;
}
return (dest);
}
