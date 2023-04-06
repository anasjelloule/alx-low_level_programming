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
if (argc < 2)
printf("Error\n");
else
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
