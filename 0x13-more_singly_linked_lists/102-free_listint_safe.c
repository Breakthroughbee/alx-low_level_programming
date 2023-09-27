#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *temp_head;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		difference = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp_head;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
