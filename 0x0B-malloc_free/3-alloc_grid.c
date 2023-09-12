#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int j, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		grid[j] = (int *)malloc(width * sizeof(int));

		if (grid[j] == NULL)
		{
			for (i = 0; i < j; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);

		}

		for (i = 0; i < width; i++)
		{
			grid[j][i] = 0;
		}
	}

	return (grid);

}
