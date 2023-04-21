#include <stdio.h>
/**
  * main - while function entry point
  * Description: 'Alphabet in lowercase and a new line'
  * Return: Always 0 (success)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
