#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all element
 * @h: Number of element
 *
 * Return: Nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
