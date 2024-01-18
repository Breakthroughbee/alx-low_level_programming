#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenated 2 stringss
 * @n: int
 * @s1: s
 * @s2: s
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t x, y;
	char *z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	x = strlen(s1);
	y = strlen(s2);

	if (n >= y)
	{
		n = y;
	}

	z = malloc((x + n + 1) * sizeof(char));

	if (z == NULL)
	{
		return (NULL);
	}
	strcpy(z, s1);
	strncat(z, s2, n);

	return (z);
}
