#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int sum, i;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
sum += i;
if (i % 5 == 0)
sum += i;
}
printf("%d", sum);
}
