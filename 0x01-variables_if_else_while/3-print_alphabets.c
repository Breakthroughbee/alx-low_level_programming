#include <stdio.h>
/**
  * main - while loop entry point
  * Description - 'Alphabet in lower and upper case'
  * Return: always 0 (success)
  */
int main(void)
{
	int n = 97;
	int k = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (k <= 90)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
