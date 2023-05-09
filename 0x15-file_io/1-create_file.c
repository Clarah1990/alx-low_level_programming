#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The file name to be created.
 * @text_content: A string to write to the file.
 * Return: On success 1, Otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;

		bytes_written = write(f, text_content, len);
		if (bytes_written == -1)
			return (-1);
	}

	close(f);
	return (1);
}
