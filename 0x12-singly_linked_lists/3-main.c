#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - chcek code
 *
 * Return: Always 0
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Danton");
	add_node_end(&head, "David");
	add_node_end(&head, "Gary");
	add_node_end(&head, "Holden");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Jay");
	add_node_end(&head, "Jennie");
	add_node_end(&head, "Jimmy");
	add_node_end(&head, "Victor");
	add_node_end(&head, "Walton");
	print_list(head);
	return (0);
}
