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
int i, j, k = 0;
for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
{
j = i;
break;
}
for (i = 0; s[i] != '\0'; i++)
{
}
char *ss = malloc(i - j);
for (i = j; s[i] != '\0'; i++)
ss[k++] = s[i];
if (ss != NULL)
{
ss[k] = '\0';
return (ss);
}
return (NULL);
}
