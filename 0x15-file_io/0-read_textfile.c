#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function
 * @filename: pointer
 * @letters: pointer
 * Return: Always(0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (filename == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(o);
	return (w);
}
