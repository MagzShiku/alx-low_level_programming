#include "main.h"
#include <stdio.h>

/**
 * print_square - function name
 * @size: the square size
 * Return: 0 for success
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			putchar(35);
		}
		putchar('\n');
	}
}

