#include "main.h"

/**
 * more_numbers - function name to print a series of numbers 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			_putchar('1');
			_putchar(a % 10 + '0');
		}
	_putchar('\n');

	}

}
