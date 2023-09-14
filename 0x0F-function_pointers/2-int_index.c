#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: arrray
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
	{
		return (-1);
	}
	for (j =  0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
		{
			return (1);
		}
	}
	return (-1);
}
