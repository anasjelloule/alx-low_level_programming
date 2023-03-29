#include "main.h"
/**
 * leet -  Encrypte string
 *
 * @str: char
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
int i, j;
char ck[] = {"a4A4e3E3o0O0t7T7l1L1"};
for (i = 0; str[i] != '\0'; i++)
for (j = 0; j < 19; j++)
if (ck[j] == str[i])
{
str[i] = ck[j + 1];
break;
}
return (str);
}
