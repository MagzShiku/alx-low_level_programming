#include "main.h"


/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int _outcome;
	int i;
	int _val;

	_outcome = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			_val = b[i] - '0';
			_outcome = 2 * _outcome + _val;
		}
		else
		{
			return (0);
		}
	}
	return (_outcome);
}
