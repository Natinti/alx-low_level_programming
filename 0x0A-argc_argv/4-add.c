#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - a program that adds two positive numbers
 * @argc: number of argument passed
 * @argv: srrsy of arguments
 *
 * Return: 0 (Success), 1 Errorr when fails
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
