#include "main.h"

/**
 * *_memcpy - copy memory
 * @dest: char array destination
 * @src: char array source
 * @n: num
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
