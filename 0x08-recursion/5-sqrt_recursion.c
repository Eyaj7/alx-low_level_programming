#include "main.h"
/**
 * check - function 'check'
 * @y:int
 * @n:int
 * Return: Always(0)
 */
int check(int n, int y)
{
if (y * y > n)
return (-1);
if (y * y == n)
return (y);
return (check(n, y + 1));
}

/**
 *_sqrt_recursion - function '_sqrt_recursion'
 *@n:int
 *Return: Always(0)
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (check(n, 0));
}
