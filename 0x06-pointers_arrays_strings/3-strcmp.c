#include "main.h"
/**
 * _strcmp -  Copy String
 *
 * @s1: string
 * @s2: string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i, j, f = 0;
for (i = 0; s2[i] != '\0'; i++)
{
}
for (j = 0; s1[j] != '\0'; j++)
{
}
if (i > j)
return (-1);
if (i < j)
return (1);
for (i = 0; s2[i] != '\0'; i++)
if (s1[i] != s2[i])
f++;
return (f);
}
