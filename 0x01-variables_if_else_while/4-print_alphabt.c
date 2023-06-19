#include <stdio.h>

/**
 * main - Entry Point
 * A program to run lines of logicalstatement using putchar function
 *
 * Return:0 (Success)
 */

int main(void)
{
	char alpha;

/*Print lowercase alphabet except q and e using putchar*/

	for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	if (alpha != 'q' && alpha != 'e')
	{
		putchar(alpha);
	}
}

putchar('\n');

return (0);
}
