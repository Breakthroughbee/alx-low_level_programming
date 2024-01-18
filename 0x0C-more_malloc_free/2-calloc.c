#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - func to allocate memory for array using malloc
 * @nmemb: array
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t n;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;

	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, n);
	return (ptr);
}
