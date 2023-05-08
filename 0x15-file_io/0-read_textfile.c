#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX STDOUT.
 * @filename: The file that should be read
 * @letters: Number of letters to read and print.
 * Return: 0 if the file can not be opened or read
 * and when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int f;
	char *buffer;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(f, buffer, letters);
	if (bytes_read == -1)
	return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_read != bytes_written || bytes_written == -1)
		return (0);

	free(buffer);
	close(f);
	return (bytes_written);
}
