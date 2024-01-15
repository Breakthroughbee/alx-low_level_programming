#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns 2 decimal array
 * @width: first integer
 * @height: second integer
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int x = 0, y = 0;
	int **new_h;

	if (width <= 0 || height <= 0)
		return (NULL);
	new_h = malloc(height * sizeof(int *));
	if (new_h == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		new_h[x] = malloc(width * sizeof(int));
		if (new_h[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(new_h[x]);
			}
			free(new_h);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			new_h[x][y] = 0;
		}
	}
	return (new_h);
}
