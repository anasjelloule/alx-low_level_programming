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

va_list lst;
va_start(lst, n);
for (i = 0; i < n; i++)
{
if (i > 0 && separator != NULL)
printf("%s", separator);
printf("%d", va_arg(lst, int));
}
printf("\n");
va_end(lst);
}
