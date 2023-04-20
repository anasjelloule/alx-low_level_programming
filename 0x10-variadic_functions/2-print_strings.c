#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints all the elements
 * @separator:ceprator
 * @n:numbers
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list lst;
va_start(lst, n);
for (i = 0; i < n; i++)
{
str = va_arg(lst, char *);
if (i > 0 && separator != NULL)
printf("%s", separator);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
}
printf("\n");
va_end(lst);
}
