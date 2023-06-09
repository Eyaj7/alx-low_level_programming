#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function
 * @separator: the string
 * @n: number
 * @...: variable number
 * Return: Always(0)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int i;
va_start(strings, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
str = va_arg(strings, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
