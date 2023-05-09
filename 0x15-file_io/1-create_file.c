#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function
 * @filename: pointer
 * @text_content: pointer
 * Return: Always(0)
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);
	if (o == -1 || w == -l)
	{
		return (-1);
	}
	close(o);
	return (1);
}
