#include "main.h"
/**
 *  _print_rev_recursion - Print the String
 * @s: string to cop from src
 * Return: return Always 0
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(++s);
_putchar(*(s - 1));
}
}
