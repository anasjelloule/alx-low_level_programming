#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
if (atoi(argv[i]) == 0)
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
