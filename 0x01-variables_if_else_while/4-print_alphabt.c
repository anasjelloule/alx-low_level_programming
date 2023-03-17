#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 *Main program
 */
int main(void)
{
    char a;

    for (a = 'a'; a <= 'z'; a++)
    {
        if (a == 'q' || a == 'e')
        {
            continue;
        }
        putchar(a);
    }
    putchar('\n');
    return (0);
}
