#include <stdio.h>
#include "main.h"

/**
 * set_bit - function
 * @n: int
 * @index: int
 * Return: Always(0)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > 63)
		return (-1);

	set = 1 << index;
	*n = *n | set;
	return (1);
}
