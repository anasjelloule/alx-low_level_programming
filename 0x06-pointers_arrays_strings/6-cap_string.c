#include "main.h"
/**
 * _checkOf - check if special  character
 * @c: character to Get
 * Return: 0 ou 1
 */
int _checkOf(char c)
{
int i;
char checkarr[13] = {'\n', '\t', ' ', '.', ',', ';', '!', '?', '(',
 ')', '{', '}'};
for (i = 0; i < 13; i++)
if (checkarr[i] == c)
return (1);
return (0);
}
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
if (_checkOf(str[i - 1]) == 1 && str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
return (str);
}
