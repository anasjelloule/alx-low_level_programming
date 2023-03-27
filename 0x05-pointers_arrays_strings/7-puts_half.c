#include "2-strlen.c"
#include "main.h"
/**
 * puts_half -  Print
 *
 * @str: String
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, j = _strlen(str);
j--;
for (i = (j / 2); i < j; i++)
_putchar(*(str + i));
_putchar('\n');
}
