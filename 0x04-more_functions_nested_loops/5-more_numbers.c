#include "main.h"

/**
  * more_numbers - repeat numbers to fourteen, ten times
  */

void more_numbers(void)
{
	int i = 0;
	int m;

	while (i < 10)
	{
		for (m = 0; m <= 14; m++)
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		i++;
	}
}
