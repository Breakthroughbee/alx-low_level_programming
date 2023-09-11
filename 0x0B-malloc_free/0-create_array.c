#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - malloc entry point
 * @size: unsigned int size
 * @c: char
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *some_array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	
	some_array = (char *)malloc(size * sizeof(char));

	if (some_array == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		some_array[i] = c;
	}


	return (some_array);
}
