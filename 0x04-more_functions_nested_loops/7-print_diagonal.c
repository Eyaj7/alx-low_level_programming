#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n - 1; i++)
{
for (j = 0; j < i - 1; j++)
{
_putchar (' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
