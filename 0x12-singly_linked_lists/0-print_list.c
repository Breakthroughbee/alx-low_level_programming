#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdef.h>

/**
 * print_list - prints lists
 * @h: header
 *
 * Return: counted of node
 */

size_t print_list(const list_t *h)
{
	const list_t *initial = h;
	size_t counted = 0;

	while (initial != NULL)
	{
		if (initial->s != NULL)
			printf("s\n", initial->s);
		else
			printf("[0] (nil\n");
		if (initial->s != NULL)
			printf("%s\n", initial->s);

		counted++;
		initial = initial->next;
	}
	return (counted);
}
