#include "lists.h"
/**
 * print_listint - prints elements in a linked list
 * @h: linekd list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *temp_head = h;

	while (temp_head != NULL)
	{
		printf("%d\n", temp_head->n);
		node_num++;
		temp_head = temp_head->next;
	}

	return (node_num);
}
