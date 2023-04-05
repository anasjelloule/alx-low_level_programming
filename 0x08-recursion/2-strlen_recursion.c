#include "main.h"
/**
 *  _strlen_recursion - Print the String
 * @s: string to cop from src
 * Return: return Length of string
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
i = _strlen_recursion(++s) + 1;
return i;
}
