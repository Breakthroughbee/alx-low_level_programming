#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: inked list
 *
 * Return: On success 0
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *temp_head = h;

	while (temp_head != NULL)
	{
		node_count++;
		temp_head = temp_head->next;
	}
	return (node_count);
}
