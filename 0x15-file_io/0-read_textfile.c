#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * and if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, t;
	char *file;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	t = read(fd, file, letters);
	w = write(STDOUT_FILENO, file, t);

	free(file);
	close(fd);
	return (w);
}
