#include "main.h"

/**
  * print_rev - rints a string, in reverse
  * @s: string reference pointer used
  * Return: 0
  */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
		putchar(s[a]);
	putchar('\n');
}
