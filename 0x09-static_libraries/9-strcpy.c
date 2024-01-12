#include "main.h"

/**
 * *_strcpy - copy string with NULL byte
 * @dest: destination buffer
 * @src: source buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, x;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
