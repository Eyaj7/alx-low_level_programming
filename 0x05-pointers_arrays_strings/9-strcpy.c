#include "main.h"
/**
 * _strcpy - function that copies the string
 * @dest: copy to
 * @src: copy from
 * Return: Always(0)
 */
char *_strcpy(char *dest, char *src)
{
int i;
if (dest == 0)
return (0);
for (i = 0 ; src[i] != '\0' ; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
