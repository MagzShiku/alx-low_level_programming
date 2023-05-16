#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the previous 2d grid matrix
 * @grid: Pointer to pointer for matrix
 * @height: height of grid
 * Return: 0 on success
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
