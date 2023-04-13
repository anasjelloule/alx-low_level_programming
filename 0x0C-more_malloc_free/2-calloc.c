#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  concatenates two strings.
 * @nmemb: parameter
 * @size: parameter
 * Return: NULL if size is 0 or pointer to concatenation of s1 and s2
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *check;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
check = malloc(nmemb * size);
if (check == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
check[i] = 0;
return (check);
}
