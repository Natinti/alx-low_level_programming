#include <stdio.h>

/**
 * main - Entry Point
 * A program to run line of ocde for putchar function
 *
 * Return:0 (Success)
 */

int main(void)
{
	char alpha;

	/*Printing lower alphabets in putchar*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	/*Using putchar to print newline*/

	putchar('\n');

	return (0);
}
