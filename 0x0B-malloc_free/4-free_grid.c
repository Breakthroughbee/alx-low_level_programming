#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: allocated grid
 * @height: height
 *
 * Return: on success 0
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
	{
		return;
	}

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
