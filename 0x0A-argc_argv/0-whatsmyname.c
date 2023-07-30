#include <stdio.h>
#include "main.h"

/**
 * main - this functions print the number of argument passed in the progam
 * @argc: argument count(number of arguments)
 * @argv: argument vectors(array of arguments passed)
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("There is no program name\n");
	}
	return (0);
}
