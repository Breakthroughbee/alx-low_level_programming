#ifndef LISTS_H
#define LISTS_H

/**
 * struct node - list
 * @s: stinrg
 * @next: next
 * @length: lenght of string
 * 
 * Description: Singly linked lists
 */

typdef struct node
{
	char *s;
	unsigned int length;
	struct node *next;
} list_t;

int _putchar(char *c);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *s);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
