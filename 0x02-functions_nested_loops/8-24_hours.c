#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - jack_bauer
 *
 * Return: Void
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
for (j = 0; j < 60; j++)
{
if (i < 10)
printf("0%d:", i);
if (j < 10)
printf("0%d", j);
if (i >= 10)
printf("%d:", i);
if (j >= 10)
printf("%d", j);
printf("\n");
}
}
