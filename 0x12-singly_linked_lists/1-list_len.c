#include "lists.h"
#include <stdio.h>

/**
 * list_len -returns the number of elements in a linked list_t
 * @h: singly linked list position
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
