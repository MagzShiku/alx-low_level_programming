#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to use if the number is greater than 0
 * Return: 1 if n is > than 0, 0 if n is = 0 & -1 for n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

	_putchar('\n');
}
