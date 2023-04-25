#include "main.h"

/**
 * _abs - print absolute value of an integer
 * @c: the integer
 * Return: the absolute value or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
