#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 *Main program
 */
int main(void)
{
    char a;
    for (a = 'a'; a <= 'Z'; a++)
        putchar(a);
    for (a = 'A'; a <= 'Z'; a++)
        putchar(a);
    putchar('\n');
    return (0);
}
