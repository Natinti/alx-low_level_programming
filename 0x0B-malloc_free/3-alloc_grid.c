#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function to nested loop to form grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim array
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);

		if (mem[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(mem[j]);
			}
			free(mem);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			mem[i][j] = 0;
		}
	}
	return (mem);
}
