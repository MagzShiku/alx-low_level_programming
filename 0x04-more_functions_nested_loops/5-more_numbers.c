#include "main.h"

/**
 * more_numbers - function name to print a series of numbers 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int a;

	i = 0;

	while (i < 10)
	{
		i++;

		for (a = 48; a <= 57; a++)
		{
			_putchar(a);
		}
		for (a = 10; a <= 14; a++)
		{
			_putchar('1');
			_putchar(a % 10 + '0');
		}
	_putchar ('\n');

	}

}
