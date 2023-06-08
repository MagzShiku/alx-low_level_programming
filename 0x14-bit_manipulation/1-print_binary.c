#include "main.h"

/**
 * print_binary -  a function that prints the
 * binary representation of a number.
 * @n: the number
 * Return: the number
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	bool _zeros;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	_zeros = true;

	while (m > 0)
	{
		if ((n & m) != 0)
			_zeros = false;

		if (!_zeros)
			putchar((n & m) ? '1' : '0');

		m >>= 1;
	}
}
