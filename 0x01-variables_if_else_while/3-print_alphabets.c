#include <stdio.h>

/**
 * main - Entry Point
 * A program to print a line of code for logical statement using putchar
 *
 * Return:0 (Success)
 *
 */

int main(void)
{
	char alpha;

/*Print lowercase alphabet using putchar*/
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	putchar(alpha);

}

/*Print Uppercase alphabet using putchar*/
for (alpha = 'A'; alpha <= 'Z'; alpha++)
{
	putchar(alpha);

}

putchar('\n');

return (0);
}
