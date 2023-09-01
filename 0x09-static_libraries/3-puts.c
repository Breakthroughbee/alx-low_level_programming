#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: the string to be printed
 * Return: string and new lin
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}

	putchar('\n');
}
