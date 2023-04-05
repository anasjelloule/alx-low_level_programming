#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - search for the character c
 * @s: string to cop from src
 * @c: char to copy to dest
 * Return: 1 or 0
 */
unsigned int _strspn(char *s, char *c)
{
int i, j, k = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
if (s[i] == c[j])
k++;
if (k <= i)
return (k);
}
return (k);
} 
