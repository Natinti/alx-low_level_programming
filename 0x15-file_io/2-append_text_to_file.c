#include "main.h"

/**
 * append_text_to_file - a function that append text at the end of file
 * @filename: the name of the file
 * @text_content: string to add at the end of file
 *
 * Return: 1 when Success and -1 when failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t _write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		_write = write(fd, text_content, strlen(text_content));
		if (_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
