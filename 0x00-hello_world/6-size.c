#include <stdio.h>

/**
 * main- Entry Point
 * A program to run the computer size of
 *
 * Return:0 (success)
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
printf("Size of an int:%lu byte(s)\n",(unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
