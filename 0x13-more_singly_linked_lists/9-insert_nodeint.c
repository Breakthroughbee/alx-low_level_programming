#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pinter
 * @idx: index
 * @n: n
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *temp_head = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; temp_head && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = temp_head->next;
			temp_head = new_node;
			return (new_node);
		}
		else
			temp_head = temp_head->next;
	}
	return (NULL);
}

