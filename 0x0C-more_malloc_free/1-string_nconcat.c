#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: NULL if size is 0 or pointer to concatenation of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int size, i, n2 = (int)n;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (size = 0; s1[size] != '\0'; size++)
{
}
if (size >= n2)
n2 = size;
s = (char *)malloc(++size * sizeof(char));
if (s == 0)
return (NULL);
size = 0;
for (; s1[size] != '\0'; size++)
s[size] = s1[size];
for (i = 0; i < n2; i++)
s[size++] = s2[i];
s[size] = '\0';
return (s);
}
