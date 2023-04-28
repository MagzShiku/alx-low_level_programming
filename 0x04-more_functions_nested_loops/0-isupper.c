#include "main.h"

/**
 * _isupper -  function name
 * @c: character to be checked
 * Return: 1 if upper case, 0 if lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
