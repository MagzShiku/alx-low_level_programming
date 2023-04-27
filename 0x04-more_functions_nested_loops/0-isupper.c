#include "main.h"

/**
 * _isupper - checking for upper case character
 * @c: parameter to be cheachde for
 * Return: 1 if c is upper case and 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
