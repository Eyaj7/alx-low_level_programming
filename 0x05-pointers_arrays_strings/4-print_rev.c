#include "main.h"
/**
 * print_rev -  function that prints a string
 * @s: string
 * Return: Always(0)
 */
void print_rev(char *s)
{
int count = 0;
while (*s)
{
s++;
count++;
}
while (count)
{
s--;
putchar(*s);
count--;
}
putchar('\n');
}
