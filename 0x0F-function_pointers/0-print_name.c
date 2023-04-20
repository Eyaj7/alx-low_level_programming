#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Function
* @name: string
* @f: pointer
* Return: Always(0)
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
