#include <stdio.h>
#include "main.h"

/**
 * get_bit - function
 * @n: int
 * @index: int
 * Return: Always(0)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int git;

	if (index > 63)
		return (-1);
	git = (n >> index) & 1;
	return (git);
}
