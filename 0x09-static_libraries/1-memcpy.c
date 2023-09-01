#include "main.h"

/**
 * *_memcpy -  copies memory area
 * @n: number of bytes to be coppied
 * @src: source to copy from
 * @dest: detinstion
 *
 *
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
