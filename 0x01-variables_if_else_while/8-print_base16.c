#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
char a;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (a = 'a'; a <= 'f'; a++)
putchar(a);
putchar('\n');
 return (0);
}
