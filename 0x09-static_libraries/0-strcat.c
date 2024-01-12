#include "main.h"

/**
 * *_strcat - catenate 2 strings
 * @src: sourcec
 * @dest: destination
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int y, x;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[y] = src[x];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
