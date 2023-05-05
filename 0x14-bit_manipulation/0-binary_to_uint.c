#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function
 * @b: string
 * Return: Always(0)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		uint = 2 * uint + (b[len] - '0');
	}
	return (uint);
}
