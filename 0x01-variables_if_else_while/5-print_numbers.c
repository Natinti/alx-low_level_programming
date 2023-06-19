#include <stdio.h>

/**
 * main - Entry Point
 * A program to print lines of code in base ten using putchar function
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int number;

/*Print a single digit from 0 to 9*/

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);

	}

	putchar('\n');

	return (0);

}
