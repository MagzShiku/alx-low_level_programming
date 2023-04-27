#include "main.h"

/**
 * _isdigit - to ches=ck for digit
 * @c: value being checked for
 * Return: 1 if between 0-9 and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{	return (1);
	}

	return (0);
}
