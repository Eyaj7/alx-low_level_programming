#include "main.h"
/**
*check - funtion 'check'
*@n:int
*@i:int
*Return: Always (0)
*/
int check(int n, int i)
{
if (i == 1)
return (1);
if (i > 0 && n % i == 0)
return (0);
return (check(n, i - 1));
}
/**
*is_prime_number - function 'is_prime_number'
*@n:int
*Return: Always(0)
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check(n, n - 1));
}
