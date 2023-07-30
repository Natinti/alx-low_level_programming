#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments received
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
