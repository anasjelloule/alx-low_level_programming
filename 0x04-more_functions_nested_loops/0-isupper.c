#include "main.h"
/**
 * _isupper - check the c
 *
 * @c: character to check
 * Return: Always 0.
 */
int _isupper(int c)
{
    char a;
    for (a = 'A'; a <= 'Z'; a++)
        if (c == a)
            return (1);
    return (0);
}
