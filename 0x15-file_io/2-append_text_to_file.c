#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: On success 1, Otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;

		f = open(filename, O_WRONLY | O_APPEND);

		bytes_written = write(f, text_content, len);
		if (bytes_written == -1)
			return (-1);
	}
	close(f);
	return (1);
}
