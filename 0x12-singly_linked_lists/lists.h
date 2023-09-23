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

size_t print_list(const list_t *h);

#endif
