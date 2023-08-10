#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: is the file to write to the string
 *
 * Return: 1 when Success, -1 when failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t _write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
