#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2D array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Decription: free memory of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
