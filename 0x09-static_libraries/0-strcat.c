#include "main.h"
/**
 * _strcat -  Concat String
 *
 * @dest: string
 * @src: string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j = 0;
for (i = 0; dest[i] != '\0'; i++)
{
}
while (src[j] != '\0')
{
dest[i] = src[j];
++i;
j++;
}
return (dest);
}
