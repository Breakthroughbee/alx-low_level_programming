#include "main.h"

int actual_prime(int n, int y);

/**
 * is_prime_number - prime num
 * @n: prime
 *
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calc prime recursively
 * @n: prime
 * @y: loop
 *
 * Return: 1 when n is prime
 */

int actual_prime(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (actual_prime(n, y - 1));
}
