#include "main.h"

/**
 * *_isdigit - check 0 to 9
 * @c: parameter
 * Return: 1 on success, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
