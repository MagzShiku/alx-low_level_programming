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
	int length;
	int i, j;
	int _val;
	int _pow;
	int _num;

	_outcome = 0;
	length = strlen(b);
	_num = 1;

	if (b == NULL)
		return (0);

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			_val = b[i] - '0';
			_pow = length - i - 1;

			for (j = 0; j < _pow; j++)
			{
				_num *= 2;
			}
			_outcome += _val * _num;
		}
		else
		{
			return (0);
		}
	}
	return (_outcome);
}
