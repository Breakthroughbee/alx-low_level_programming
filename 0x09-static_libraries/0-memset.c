#include "main.h"

/**
 * *_memset - fill memory
 * @n: copy b n times
 * @b: Cahracter
 * @s: memory area
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
