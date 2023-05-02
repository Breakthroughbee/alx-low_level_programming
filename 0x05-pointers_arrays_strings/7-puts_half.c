#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: input string
  */

void puts_half(char *str)
{
	int full_length, half_length;

	full_length = 0;
	while (str[full_length] != '\0')
		full_length++;

	half_length = full_length / 2;

	if (full_length % 2 == 1)
		half_length++;

	while (full_length > half_length)
	{
		putchar(str[half_length]);
		half_length++;
	}
	putchar('\n');
}
