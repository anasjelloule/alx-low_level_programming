#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - check the code
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int coins = 0, money = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (strchr(argv[argc - 1], '-'))
{
printf("0\n");
return (1);
}
money = atoi(argv[1]);
while (money > 0)
if (money % 25 == 0)
{
money -= 25;
coins++;
}
else if (money % 10 == 0)
{
money -= 10;
coins++;
}
else if (money % 5 == 0)
{
money -= 5;
coins++;
}
else if (money % 2 == 0)
{
money -= 2;
coins++;
}
else if (money % 1 == 0)
{
money -= 1;
coins++;
}
printf("%d\n", coins);
return (0);
}
