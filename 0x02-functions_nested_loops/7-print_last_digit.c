#include "main.h"

/**
 * print_last_digit - to print last digit of an integer
 * @i: the integer value
 * Return: Last digit or 0
 */

int print_last_digit(int i)
{
	int a;

	a = i % 10;

	if (a < 0)
	{
	a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
