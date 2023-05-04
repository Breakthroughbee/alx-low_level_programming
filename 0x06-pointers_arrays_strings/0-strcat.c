#include "main.h"

/**
  * *_strcat - to catenate two stings
  * @src: 1st string
  * @dest: 2nd string
  * Return: catenated string
  */

char *_strcat(char *dest, char *src)
{
	int length_of_string, n;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (n = 0; src[n] != '\0'; n++, length_of_string++)
	{
		dest[length_of_string] = src[n];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
