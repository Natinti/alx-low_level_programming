#include "main.h"
#define BUFF_SIZE 1024

/**
 * error_98 - this is the error when you can't read the file
 * @file0: is the value to check
 * @argv: the argument passed
 * @buffer: what is to be read from size allocated
 */

void error_98(int file0, char *buffer, char *argv)
{
	if (file0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * error_99 - error when can not create file or write fails
 * @file0: file to be check
 * @argv: the argument passed
 * @buffer: what is to be read from size allocated
 */
void error_99(int file0, char *buffer, char *argv)
{
	if (file0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100 - error when file can't close
 * @file0: the file to be checked
 * @buffer: the buffer to be read
 */

void error_100(int file0, char *buffer)
{
	if (file0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close to %i\n", file0);
		free(buffer);
		exit(100);
	}
}

/**
 * main - main Entry Point
 * @argc: number of arguments within the file
 * @argv: a pointer points to the array of the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int file0, file1, res0, res1; /* res0 - source file, res1- destination file */
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (!buffer)
		return (0);

	file1 = open(argv[1], O_RDONLY);
	error_98(file1, buffer, argv[1]);

	file0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(file0, buffer, argv[2]);

	do {
		res0 = read(file1, buffer, BUFF_SIZE);
		if (res0 == 0)
			break;
		error_98(res0, buffer, argv[1]);
		res1 = write(file0, buffer, res0);
		error_99(res1, buffer, argv[2]);

	} while (res1 >= BUFF_SIZE);
	res0 = close(file0);
	error_100(res0, buffer);
	res0 = close(file1);
	error_100(res0, buffer);
	free(buffer);
	return (0);
}

