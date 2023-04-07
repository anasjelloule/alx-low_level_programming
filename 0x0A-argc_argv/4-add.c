#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 *  checkstring - check a string if it's int
 * @s: string to check
 * Return: return 0
 */
int checkstring(char *s)
{
int i = 0;
for (; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
{
return (0);
}
}
return (1);
}
/**
 * main - check the code
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, ass = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!checkstring(argv[i]))
{
printf("Error\n");
return (1);
}
else
ass += atoi(argv[i]);
}
printf("%d\n", ass);
return (0);
}
