#include <stdio.h>

/**
 * main - print the name of the file it iwas complied from
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("This program was complied from: %s\n", __FILE__);
	return (0);
}
