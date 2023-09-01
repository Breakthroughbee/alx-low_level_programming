#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: String to be checked
 * str_len: value to be returned
 * Return: lenght
 */

int _strlen(char *s)
{
	int str_len= 0;

	while (s[str_len])
		str_len++;
	return (str_len);
}
