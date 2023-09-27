#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node
 * @index: index node
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp_head = head;

	while (temp_head && a < index)
	{
		temp_head = temp_head->next;
		a++;
	}

	return (temp_head ? temp_head : NULL);
}
