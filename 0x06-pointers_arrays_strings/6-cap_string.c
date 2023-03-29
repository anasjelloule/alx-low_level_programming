#include "main.h"
/**
 * cap_string -  cap String
 *
 * @str: char
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;
return (str);
}
