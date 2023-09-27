#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: pointer
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_head = *head;
	listint_t *initial = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_head);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temp_head || !(temp_head->next))
			return (-1);
		temp_head = temp_head->next;
		j++;
	}
	initial = temp_head->next;
	temp_head->next = initial->next;
	free(initial);

	return (1);
}

