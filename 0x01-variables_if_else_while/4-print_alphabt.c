#include <stdio.h>
/**
  * main - while loop entry point
  * Description - 'Lower case without e and q'
  * Return: always 0 (success)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
