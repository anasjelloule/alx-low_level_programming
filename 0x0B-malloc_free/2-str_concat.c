#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  str_concat - point to a newly allocated space in memory
 * @s1: contains the contents
 * @s2: contains the contents
 * Return: NULL if size is 0 or pointer to concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
int size, i;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (size = 0; s1[size] != '\0'; size++)
{
}
for (i = 0; s2[i] != '\0'; i++)
{size++;
}
s = (char *)malloc(++size * sizeof(char));
if (s == 0)
return (NULL);
size = 0;
for (; s1[size] != '\0'; size++)
s[size] = s1[size];
for (i = 0; s2[i] != '\0'; i++)
s[size++] = s2[i];
s[size] = '\0';
return (s);
}
