#include "main.h"

/**
  * _print_rev_recursion -  reverse string entry point
  *
  * @s: string
  *
  * Return: 0 (success)
  */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);


	putchar(*s);
}
