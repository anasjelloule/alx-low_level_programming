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
int size1, size2 = 0, i, n2 = (int)n;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (size1 = 0; s1[size1] != '\0'; size1++)
{
}
for (i = 0; s2[i] != '\0'; i++)
{
size2++;
}
if (size2 <= n2)
size2 = n2;
s = (char *)malloc(size1 + size2 + 1 * sizeof(char));
if (s == 0)
return (NULL);
size1 = 0;
for (; s1[size1] != '\0'; size1++)
s[size1] = s1[size1];
for (i = 0; i < n2; i++)
s[size1++] = s2[i];
s[size1] = '\0';
return (s);
}
