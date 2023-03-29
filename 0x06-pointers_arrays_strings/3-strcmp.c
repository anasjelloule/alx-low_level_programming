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
int i;
for (i = 0; s2[i] != '\0'; i++)
if (s1[i] - s2[i] != 0)
return (s1[i] - s2[i]);
}
