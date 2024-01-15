#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 nums
 * @s1: char one
 * @s2: char two
 *
 * Return: char concatenate
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, con, z = 0;
	char *arr;

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
	z = x + y + 1;
	arr = malloc(z * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (con = 0; con < x; con++)
	{
		arr[con] = s1[con];
	}
	for (con = 0; con <= y; con++)
	{
		arr[con + x] = s2[con];
	}
	return (arr);
}
