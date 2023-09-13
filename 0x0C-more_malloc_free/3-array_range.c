#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range -  creates an array of integers
 * @max: maximum
 * @min: minimum
 *
 * Return: If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *res;
	int num, b;

	if (min > max)
	{
		return (NULL);
	}

	num = max - min + 1;

	res = malloc(num * sizeof(int));

	if (res == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < num; b++)
	{
		res[b] = min + b;
	}

	return (res);

}
