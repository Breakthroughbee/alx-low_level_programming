#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int string_length;

	string_length = 0;
	while (n[string_length] != '\0')
	{
		if (n[string_length] >= 97 && n[string_length] <= 122)
			n[string_length] = n[string_length] - 32;
		string_length++;
	}
	return (n);
}
