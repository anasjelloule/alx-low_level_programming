#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - search for the character c
 * @s: string to cop from src
 * @c: char to copy to dest
 * Return: 1 or 0
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
return (s + i);
if (s[i] == c)
return (s + i);
return (0);
}
