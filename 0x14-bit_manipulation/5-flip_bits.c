#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function
 * @n: int
 * @m: int
 * Return: Always(0)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, i;
	unsigned long int flip, bits;

	count = 0;
	flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bits = flip >> i;
		if (bits & 1)
			count++;
	}
	return (count);
}
