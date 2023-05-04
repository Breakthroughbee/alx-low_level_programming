#include "main.h"

/**
  * *_strncat - concatenates two strings with _strncat
  * @src: 1st string
  * @dest: 2nd string
  * @n: integer n
  * Return: pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, z;
	/* z is a counter for n bytes of src to be concatenated */
	/* length_of_string = length of destination string */
	length_of_string = 0;

	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
