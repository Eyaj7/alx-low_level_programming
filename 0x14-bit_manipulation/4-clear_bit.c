#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function
 * @n: int
 * @index: int
 *
 * Return: Always (0)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > 63)
		return (-1);

	clear = ~(1 << index);
	*n = *n & clear;
	return (1);
}
