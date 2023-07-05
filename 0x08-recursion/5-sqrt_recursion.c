#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the result of  natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

/**
 * _sqrt_recursion - Calculates to find the recursive natural square root
 * @n: number to calculate the square root
 * @i: iterator number
 *
 * Return: the result of natural square root
 */

int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
