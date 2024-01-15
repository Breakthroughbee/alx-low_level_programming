#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - malloc entry
 * @size: unsigned int
 * @c: char
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *some_array;

	if (size == 0)
	{
		return (NULL);
	}
	some_array = malloc(size * sizeof(char));
	if (some_array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		some_array[a] = c;
	}
	return (some_array);
}
