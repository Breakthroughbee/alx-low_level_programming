#include "main.h"

/**
 * *_strncat - concatenates two strings with _strncat
 *  @src: 1st string
 *  @dest: 2nd string
 *  @n: integer n
 *  Return: pointer to the resulting string dedst
 */

char *_strncat(char *dest, char *src, int n)
{
	int string_length, a;

	string_length = 0;

	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (a = 0; a < n && src[a] != '\0'; a++, string_length++)
	{
		dest[string_length] = src[a];
	}
	dest[string_length] = '\0';
	return (dest);
}
