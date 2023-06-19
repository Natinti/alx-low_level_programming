#include <stdio.h>

/**
 * main - Entry Point
 * A program to run lines of code that print hexadecimals in putchar function
 *
 * Return:0 (Success)
 *
 */

int main(void)
{
	char decimal;

/*Print the hexadcimal using Putchar*/

for (decimal = '0'; decimal <= '9'; decimal++)
{
	putchar(decimal);

}

for (decimal = 'a'; decimal <= 'f'; decimal++)
{
	putchar(decimal);

}

putchar('\n');

return (0);

}
