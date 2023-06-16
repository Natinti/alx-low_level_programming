#include <stdio.h>

/**
 * main- Entry Point
 * A program to run the computer size of
 *
 * Return:0 (success)
 */

int main(void)
{
printf("Size of a char: %zubyte(s)\n", sizeof(char));
printf("Size of an int:%zubyte(s)\n", sizeof(int));
printf("Size of a long int: %zubyte(s)\n", sizeof(long int));
printf("Size of a long long int: %zubyte(s)\n", sizeof(long long int));
printf("Size of a float: %zubyte(s)\n", sizeof(float));
return (0);
}
