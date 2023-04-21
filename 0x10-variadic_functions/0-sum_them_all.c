#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function
 * @n: number
 * @...: variable number
 * Return: Always(0)
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_start(nums, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
