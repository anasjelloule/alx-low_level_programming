#include "main.h"
/**
 * _islower - Check if is lower case
 *
 * Return: Void
 */
int _islower(int c)
{
char a;
for (a = 'a'; a <= 'z'; a++)
if (a == c)
return 1;
return 0;
}
