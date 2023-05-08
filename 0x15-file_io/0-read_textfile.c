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

	o = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(o);
	return (w);
}
