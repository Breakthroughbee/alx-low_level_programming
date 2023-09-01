#include "main.h"

/*8
 * _isalpha - check for alphabetic character
 * @c: the character to be checked
 * Return: 1 On success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
