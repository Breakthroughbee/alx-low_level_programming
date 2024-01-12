#include "main.h"

/**
 * *_strncat - concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * @n: num
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y, x;

	for (y = 0; dest[y] != '\0'; y++)
		;
	for (x = 0; src[x] != '\0' && n > 0; x++, n--, y++)
	{
		dest[y] = src[x];
	}
	return (dest);
}
