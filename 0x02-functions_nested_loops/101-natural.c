#include "main.h"
#include <stdio.h>
/**
 * natural - times table function
 *
 */
void natural()
{
int sum, i;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
sum += i;
if (i % 5 == 0)
sum += i;
}
printf("%d", sum);
}
