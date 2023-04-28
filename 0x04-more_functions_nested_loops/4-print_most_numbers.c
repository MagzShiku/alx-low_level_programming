#include "main.h"

/**
 * print_most_numbers - function name to exclude 2& 4 from running
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}

		_putchar(i);

	}

	_putchar('\n');
}
