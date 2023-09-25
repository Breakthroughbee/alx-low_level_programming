#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of linked lsits
 * @h: pointer to list_T
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t str = 0;

	while (h)
	{
		if (!h->string)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->string);
		h = h->next;
		str++;
	}

	return (str);
}
