#include "main.h"

/**
 * print_last_digit - function 'print_last_digit'
 *@i : parameter
 * Return: lastDigit
 */
int print_last_digit(int n)
{
int lastDigit;
if (i < 0)
lastDigit = -1 * (n % 10);
else
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
