#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter element on array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: On success 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}

/**
 * print_element - print elemet
 * @elem: element
 *
 * Return: Nothing
 */

void print_element(int elem)
{
	printf("%d ", elem);
}
