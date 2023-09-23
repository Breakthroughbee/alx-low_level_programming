#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of element in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of element in h
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
