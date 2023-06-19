#include "main.h"
/**
 * rot13 -  Encrypte string
 *
 * @str: char
 *
 * Return: Always 0.
 */
char *rot13(char *str)
{
char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char part2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i, j = 0;
for (i = 0; str[i] != '\0'; i++)
for (j = 0; part1[j] != '\0'; j++)
if (str[i] == part1[j])
{
str[i] = part2[j];
break;
}
return (str);
}
