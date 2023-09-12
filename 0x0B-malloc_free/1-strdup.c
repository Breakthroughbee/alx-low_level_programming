#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * @str: allocated string
 *
 * Return: NULL if str = NULL
 * On success, the _strdup returns a pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	size_t len;
	char *duplicate_string;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	duplicate_string = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate_string == NULL)
	{
		return (NULL);
	}

	strncpy(duplicate_string, str, len);
	duplicate_string[len] = '\0';

	return (duplicate_string);
}
