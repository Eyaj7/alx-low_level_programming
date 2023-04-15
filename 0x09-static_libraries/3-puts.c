#include "main.h"
#include<stdio.h>
/**
* _puts - function
*@s:int
* Return: Always 0 (Success)
*/
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s++);
}
_putchar('\n');
}
