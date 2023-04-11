#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  argstostr - Concatenate a string
 * @ac: Number arguments
 * @av: array of string
 * Return: NULL or array of integers
 */
char *argstostr(int ac, char **av)
{
int w = 0, h = 0, i = 0, count = 0;
char *result;
if (ac == 0 || av == NULL)
return (NULL);
while (h < ac)
{
w = 0;
while (av[h][w] != '\0')
{
count++;
w++;
}
h++;
}
count = count + ac + 1;
result = malloc(sizeof(char) * count);
if (result == NULL)
return (NULL);
for (h = 0; h < ac; h++)
{
for (w = 0; av[h][w] != '\0'; w++)
result[i++] = av[h][w];
result[i++] = '\n';
}
return (result);
}
