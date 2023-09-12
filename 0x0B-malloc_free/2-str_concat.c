#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - catenates two string
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t length1, length2;
	char *cate_result;

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

	cate_result = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (cate_result == NULL)
	{
		return (NULL);
	}
	strcpy(cate_result, s1);
	strcat(cate_result, s2);

	return (cate_result);

}
