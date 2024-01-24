#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - search for matching value
 * @array: array
 * @size: num of indexes
 * @cmp: pointer
 *
 * Return: -1 if invalid, firs matching index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	int (*p)(int);

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	p = cmp;
	for (x = 0; x < size; x++)
	{
		if (p(array[x]))
			return (x);
	}

	return (-1);
}
