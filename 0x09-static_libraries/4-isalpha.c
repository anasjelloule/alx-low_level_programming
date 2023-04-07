#include "main.h"
/**
 * _isalpha - Check if is alphabetic
 * @c: character to compare
 * Return: Void
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
