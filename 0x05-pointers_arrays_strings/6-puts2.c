#include "2-strlen.c"
#include "main.h"
/**
 * puts2 -  Print
 *
 * @str: String
 * Return: Always 0.
 */
void puts2(char *str)
{
int i, j = _strlen(str);
for (i = 0; i < j; i++)
if (i % 2 == 0)
putchar(*(str + i));
}
