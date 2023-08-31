#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _pow_recursion - entry
 *
 * @x: int x
 *
 * @y: int y
 *
 * Return: x raised to the power of y (0) success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
