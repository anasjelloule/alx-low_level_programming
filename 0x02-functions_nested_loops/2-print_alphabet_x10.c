#include "main.h"
/**
 * print_alphabet - Print alphabet
 *
 * Return: Void
 */
void print_alphabet(void)
{
char a;
for(a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
/**
 * print_alphabet_x10 - Print alphabet X10
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
int i;
for(i = 0; i < 10; i++)
print_alphabet();
}
