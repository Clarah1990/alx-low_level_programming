#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: Name of the file to be written to.
 * Return: A pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Close file descriptors.
 * @fd: The file descriptors to be closed.
 */
void close_file(int fd)
{
	int ret;

	ret = close(fd);

	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success,
 * 97 if wrong number of arguments,
 * 98 if file_from cannot be read,
 * 99 if file_to cannot be created or written to,
 * and 100 if file descriptors cannot be closed.
 */
int main(int argc, char *argv[])
{
	int from, to, ret, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	ret = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || ret == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(to, buf, ret);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		ret = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (ret > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}