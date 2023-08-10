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
	FILE *file;
	char *buffer;
	ssize_t r;
	ssize_t w;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) + (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	r = fread(buffer, 1, letters, file);
	if (r <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';
	printf("%s", buffer);
	w = fwrite(buffer, 1, r, stdout);
	if (w != r)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (r);
}
