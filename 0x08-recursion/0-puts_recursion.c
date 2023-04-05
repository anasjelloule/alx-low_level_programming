#include "main.h"
/**
 *  _puts_recursion - Print the String
 * @s: string to cop from src
 * Return: return 0
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
_putchar(*s++);
else
{
_putchar('\n');
return;
}
_puts_recursion(s);
}
