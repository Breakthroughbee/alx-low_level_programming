#include "main.h"

/**
 * _strlen - lenght of string
 * @s: stirng
 *
 * Return: length
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
