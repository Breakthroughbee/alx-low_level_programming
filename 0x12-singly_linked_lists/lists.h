#ifndef LISTS_H
#define LISTS_H

/**
 * struct node - singly linked lists
 * @s: string
 * @next: next
 *
 * Description: string
 */

typedef struct node
{
	char *s;
	struct node *next;
} list_t;


int _putchar(char *c);

size_t print_list(const list_t *i);

#endif
