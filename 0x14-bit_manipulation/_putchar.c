#include "main.h"
#include <unistd.h>

/**
 * _putchar - this write a character c to the stdout
 * @c: this the charcter to be printed
 *
 * Return: 1 on Success
 * -1, when error and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
