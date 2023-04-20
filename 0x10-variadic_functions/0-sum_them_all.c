#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all args
 * @n: integers to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int result = 0;
unsigned int i;
va_list lst;
if ((int)n <= 0)
return (0);
va_start(lst, n);
for (i = 0; i < n; ++i)
result += va_arg(lst, int);
va_end(lst);
return (result);
}
