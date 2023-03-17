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
    int last = n % 10;
    if (last > 5)
    {
        printf("Last digit of %d is %d and is greater than 5", n, last);
    }
    if (last < 6)
    {
        printf("Last digit of %d is %d and is less than 5 and not 0", n, last);
    }
    if (last == 0)
    {
        printf("Last digit of %d is %d and is 0", n, last);
    }
    return (0);
}
