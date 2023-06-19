#include <stdio.h>

/**
 * main - Entry Point
 * A program that print combination with putchar function
 *
 * Return:0 (Success)
 *
 */

int main(void)
{
	int  comb;
/*Print combination using Putchar*/

for (comb = 0; comb < 10; comb++)
{
putchar('0' + comb);
	if (comb < 9)
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}

