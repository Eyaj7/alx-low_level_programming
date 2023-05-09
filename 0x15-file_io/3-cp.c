#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - function
 * @file: name
 *
 * Return: Always(0)
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - function
 * @fd: file
 */

void close_file(int fd)
{
	int b;

	b = close(fd);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function
 * @argc: number
 * @argv: array
 * Return: Always(0)
 */
int main(int argc, char *argv[])
{
	int o, op, r, w;
	char *buff;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_op\n");
	exit(97);
	}

	buff = create_buff(argv[2]);
	o = open(argv[1], O_RDONLY);
	r = read(o, buff, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	{
		if (o == -1 || r ==  -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(op, buff, r);
		if (op == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(o, buff, 1024);
		op = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	close_file(o);
	close_file(op);

	return (0);
}
