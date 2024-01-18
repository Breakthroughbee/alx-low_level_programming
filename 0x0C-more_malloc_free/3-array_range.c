#include "main.h"
#include <stdlib.h>

/**
 * array_range - func that creates an arry of int
 * @min: min val
 * @max: max val
 *
 * Return: pointer int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int p, z = 0;

	if (min > max)
		return (NULL);
	p = (max - min) + 1;
	ptr = malloc(p * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (; z < p; z++)
	{
		ptr[z] = min;
		min += 1;
	}
	return (ptr);
}
