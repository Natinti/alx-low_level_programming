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
	int lastDigit = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("The Last Digit of %d is %d ", n, lastDigit);

if (lastDigit > 5)
{
	printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
	printf("and is 0\n");

}
else
{
	printf("and is less than 6 and not 0\n");
}

return (0);
}
