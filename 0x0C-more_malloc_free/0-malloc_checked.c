#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocated memory with malloc
 * @b: int
 *
 * Return: 1
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
