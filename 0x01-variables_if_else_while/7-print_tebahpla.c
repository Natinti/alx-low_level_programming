#include <stdio.h>

/**
 * main - Entry Point
 * A program that print alphabet in reverse in base 10 in putchar function
 *
 * Return:0 (Success)
 */

int main(void)
{
	char alpha;

/*Print the alphabet in reverse using putchar*/

for (alpha = 'z'; alpha <= 'a'; alpha++)
{
	putchar(alpha);

}

putchar('\n');

return (0);

}
