#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * A program to print the line of code for if_else statement
 *
 * Return: 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

printf("The Last digit of %d  is", n);

if ((n % 10) > 5)
{
	printf(n, "and is greater than 5\n");
}
else if ((n % 10) == 0)
{
	printf(n, "and is 0\n");
}
else
{
	printf(n, "and is less than 6 and not 0\n");
}

return (0);
}
