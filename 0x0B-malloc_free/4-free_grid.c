#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - allocates a grid, makes free space
 * @grid: takes in width of grid
 * @height: grid height
 * Return: free grid
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
