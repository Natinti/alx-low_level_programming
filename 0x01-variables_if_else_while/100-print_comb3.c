#include <stdio.h>

/**
 * main - Entry point
 * A program to print multiple lines of code for putchar function
 *
 * Return:0 (Success)
 *
 */

int main(void)
{
	int a = '0';

/* Print different combiantion using putchar*/

	for (a = '0'; a <= '9'; a++)
	{
	int b = '0';
	for (b = '0'; b <= '9'; b++)
	{
		if (!((a == b) || (b > a)))
		{
			putchar(b);
			putchar(a);
			if(!(a == '9' && b == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
     }
putchar('\n');
return(0);
}
