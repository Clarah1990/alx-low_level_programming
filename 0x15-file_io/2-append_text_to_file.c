#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
i * @filename: name of the file
 * @text_content: NULL string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 * Description: function appends text_content to the end of the file
 * specified by filename. If the file does not exist, it will
 * not be created. If text_content is NULL, nothing will be added
 * to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		bytes_written = write(fd, text_content, length);
		if (bytes != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
