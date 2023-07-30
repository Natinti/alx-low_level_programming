#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that calculates the minimum
 * number of coins for an amount of money
 * @argc: number of argument passed
 * @argv: array of argument
 *
 * Return: 0 (Success), 1 when Error
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 20, 5, 2, 1};
	int num_coins, min_coins;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coins) / sizeof(coins[0]);
	min_coins = 0;

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			min_coins++;
		}
	}
	printf("%d\n", min_coins);

	return (0);
}


