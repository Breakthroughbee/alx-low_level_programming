#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create array of char
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int x = 0, y;
	char *array;

	if (str == NULL)
		return (NULL);
	while (str[x])
	{
		x++;
	}
	x++;
	array = malloc(x * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
	{
		array[y] = str[y];
	}
	return (array);
}
