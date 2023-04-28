#include "main.h"

/**
 * print_line - drawing strainght line
 * @n: the number of times the character _ should be printed
 * Return: 0
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}

	_putchar('\n');
}
