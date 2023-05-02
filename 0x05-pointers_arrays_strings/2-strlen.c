#include "main.h"

/**
  * _strlen - Returns length of a string
  *
  * @s: String to be checked
  *
  * str_length: value to be returned
  *
  * Return: length
  */

int _strlen(char *s)
{
	int str_length = 0;

	while (s[str_length])
		str_length++;
	return (str_length);
}
