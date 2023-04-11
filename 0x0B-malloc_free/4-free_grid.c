#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2d grid
 * @grid: grid
 * @height: height of the grid
 *
 * Return: void
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
