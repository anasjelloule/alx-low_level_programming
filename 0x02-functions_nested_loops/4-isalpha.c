#include "main.h"
#include <ctype.h>
/**
 * _islower - Check if is lower case
 * @c: character to compare
 * Return: Void
 */
int _isalpha(int c)
{
    char a;
    for (a = 'a'; a <= 'z'; a++)
        if (a == c)
            return (1);
    for (a = 'A'; a <= 'Z'; a++)
        if (a == c)
            return (1);
    return isdigit(c);
}
