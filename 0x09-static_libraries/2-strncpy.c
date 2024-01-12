#include "main.h"

/**
 * _strncpy - Copy string
 * @dest: string
 * @src: source string
 * @n: num
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
