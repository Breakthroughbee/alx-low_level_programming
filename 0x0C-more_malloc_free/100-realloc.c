#include "main.h"
#include <stdlib.h>

/**
 * _realloc - func that reallocates a memeory block
 * @ptr: pinter val
 * @old_size: val 1
 * @new_size: val 2
 *
 * Return: ptr int
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int x, l = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		l = new_size;
	else
		l = old_size;
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < l; x++)
	{
		p[x] = ((char *) ptr)[x];
	}
	free(ptr);
	return (p);
}
