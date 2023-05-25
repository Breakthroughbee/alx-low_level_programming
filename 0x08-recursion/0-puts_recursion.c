#include "main.h"

/**
  * _puts_recursion - main entry point of print file with puts
  *
  * @s: Character recursion
  * Return: 0
  */

void _puts_recursion(char *s)
{
	if (*s == '\0') {
		putchar('\n');
	}

	putchar(*s);
	puts(s + 1);
	}
