#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimesional grid
 * @grid: allocated memory
 * @height: h
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
	{
		return;
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
