#include "main.h"
#include <stddef.h>

/**
* _strpbrk - function '_strpbrk'
*@s: first occurrence in the string
*@accept: matches one of the bytes
*@NULL if no such byte
*Return: Always(0)
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
