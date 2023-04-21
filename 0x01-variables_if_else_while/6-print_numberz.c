#include <stdio.h>
/**
  * main - base ten entry point
  * Description - 'Base ten in putchar'
  * Return: always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
