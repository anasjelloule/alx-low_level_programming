#include "main.h"
/**
 * _strlen -  swap int
 *
 * @s: String
 * Return: Length of String.
 */
int _strlen(char *s)
{
int i, len = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++; // Counting the length.
}
return len;
}
