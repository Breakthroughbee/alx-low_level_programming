#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: string one
 * @s2: stirng two
 * Return: +ve int if s1 > s2 || -ve int if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}
