#include <stdio.h>
#include "main.h"

/**
 * main - the function that prints the number of argument passed into it
 * @argc: the number of arguments
 * @argv: array of argument
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
