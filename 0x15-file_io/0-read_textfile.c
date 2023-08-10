#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints to the POSIX standard output
 * @filename: is the name of the file to be read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number read
 * 0 when function fails or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}

	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_read);
}

