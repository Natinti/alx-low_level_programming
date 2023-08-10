#include <stdio.h>
#include "main.h"

/**
 * _putchar - this function writes the character c to stdout
 * @c: This is the charcter to print
 *
 * Return: 1 when Success
 * when error, -1 is returned and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
