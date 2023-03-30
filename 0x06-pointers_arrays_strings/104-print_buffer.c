#include "main.h"
/**
 * print_buffer -  Encrypte string
 *
 * @b: char
 * @size: int
 *
 * Return: char.
 */
void print_buffer(char *b, int size)
{
int i;
for (i = 0; b[i] != '\0' && i < size; i++)
_putchar(b[i]);
}
