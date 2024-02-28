#include "lists.h"

/**
 * get_nodeint_at_index -  function to return node at 5 linked list
 * @head: first node of list
 * @index: index returned
 *
 * Return: pointer to node 5 or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tmp = head;

	while (tmp && j < index)
	{
		tmp = tmp->next;
		j++;
	}
	return (tmp ? tmp : NULL);
}
