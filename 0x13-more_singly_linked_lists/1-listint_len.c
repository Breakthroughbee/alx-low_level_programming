#include "lists.h"
#include <stdio.h>

/**
 * listint_len - elements in linked list
 * @h: num of elements
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
