#include "main.h"
#include "2-strlen.c"
/**
 * _atoi -  Convert a string
 *
 * @s: string
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
int cn = 1, i, j = _strlen(s), k = 0, x = 0, np = 0;
for (i = 0; i < j; i++)
{
if (!(s[i] >= '0' && s[i] <= '9') && k > 0)
break;
if (s[i] == '-')
np--;
if (s[i] == '+')
np++;
if (s[i] >= '0' && s[i] <= '9')
{
k++;
}
}
while (k > 0)
{
x += ((s[i - 1] - '0') * cn);
i--;
k--;
cn *= 10;
}
if (np >= 0)
x *= 1;
else
x *= -1;
return (x);
}
