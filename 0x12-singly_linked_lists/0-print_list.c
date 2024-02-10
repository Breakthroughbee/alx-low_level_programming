#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t
 * @h: singly linked list position
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	while (h)
	{
		if (h[0].str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h[0].len, h[0].str);
		h = h->next;
		num++;
	}
	return (num);
}
