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
	char *ptr;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
	{
		x++;
	}
	while (s2[y])
	{
		y++;
	}
	if (n >= y)
		n = y;
	y = 0;
	ptr = malloc(sizeof(char) * (x + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
	{
		ptr[z] = s1[z];
	}
	for (; z < (x + n); z++)
	{
		ptr[z] = s2[z - x];
	}
	ptr[z] = '\0';
	return (ptr);
}
