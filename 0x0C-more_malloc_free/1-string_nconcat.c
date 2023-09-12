#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @n: integer
 * @s1: string
 * @s2: string
 *
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length
 * of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t length1, length2;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);


	if (n >= length2)
	{
		n = length2;
	}

	res = malloc((length1 + n + 1) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strncat(res, s2, n);

	return (res);

}

