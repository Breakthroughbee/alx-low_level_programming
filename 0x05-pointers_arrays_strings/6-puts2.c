#include "main.h"

/**
  * puts2 - character of a string, starting with the first character
  * @str: string referenced
  * Return: 0
  */

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
		z++;
	}
	putchar('\n');
}
