#include "main.h"
/**
  * print_alphabet_x10 - prints alphabet in lower case
  *
  * Return: always 0 (success)
  */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
