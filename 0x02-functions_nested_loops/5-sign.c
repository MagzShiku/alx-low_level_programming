#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to use if the number is greater than 0
 * Return: 1 if number is greater than 0
 * Return: 0 if number is 0
 * Return: -1 if number is less than 1
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
		return(-1);
	}
	else
	{	
		_putchar(48);
		return (0);
	}

	_putchar('\n');
}
