#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array of nmemb elements
 * @size: size
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t new_size;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new_size = nmemb * size;

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, new_size);

	return (p);
}

