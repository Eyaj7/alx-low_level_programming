#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of bytes to allocat
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
