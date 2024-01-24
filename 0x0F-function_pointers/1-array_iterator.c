#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints all content
 * @array: array
 * @size: num of indexes
 * @action: pointer function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;
	void (*p)(int);

	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;

	p = action;
	for (x = 0; x < size; x++)
		p(array[x]);
}
