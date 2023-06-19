#include <stdio.h>

/**
 * main - Entry Point
 * A program that run lines for single base 10 digit in putchar function
 *
 * Return:0 (Success)
 *
 */

int main(void)
{
	int number;

/* Print the signle digit using putchar*/
	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	putchar('\n');

	return (0);
}
