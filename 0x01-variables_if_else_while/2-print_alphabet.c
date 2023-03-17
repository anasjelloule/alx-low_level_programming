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
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */

    char ch[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < sizeof(ch); i++)
    {

        putchar(ch[i]);
    }
    return (0);
}
