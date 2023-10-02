#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - to create a new buffer allocates 1024 bytes.
 * @file: Name of the buffer file containing the stored chars.
 *
 * Return: Pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - create a close file descriptors.
 * @fd: Closed file descriptor.
 */
void close_file(int fd)
{
	int p;

	p = close(fd);

	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - write a program that copies the contents of a file to another file.
 * @argc: The number of arguments in the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Arguments: cant read or file dnt exist exit code 98, nt corect exit code 97
 *              cant crt exit code 99, cant close a file desptor exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, x, y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		y = write(to, buffer, x);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		x = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
