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
	size_t counted = 0;

	while (h)
	{
		if (!h->s)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->s);
		h = h->next;
		counted++;
	}
	return (counted);
}
