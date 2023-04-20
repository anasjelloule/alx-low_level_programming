#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * int print_numbers - Prints all the elements
 * @separator:ceprator
 * @n:numbers
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
if ((int)n > 0 || separator != NULL)
{
va_list lst;
va_start(lst, n);
for (i = 0; i < n - 1; i++)
printf("%d, ", va_arg(lst, int));
printf("%d\n", va_arg(lst, int));
va_end(lst);
}
}
