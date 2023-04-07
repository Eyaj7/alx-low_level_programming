#include "main.h"
/**
*_strlen_recursion - function _strlen_recursion
*@s:string
*Return: Always(0)
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i += _strlen_recursion(s + 1);
i++;
}
return (i);
}
