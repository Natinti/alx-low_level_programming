#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * A program to run the if_else statement function
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
/* your code goes there*/

printf("The number %d is ", n);
if (n > 0)
{
printf("positive");
}
else if (n < 0)
{
printf("negative");
}
else
{
printf("zero");
}
printf("\n");

return (0);
}
