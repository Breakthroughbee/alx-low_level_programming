#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: character
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
