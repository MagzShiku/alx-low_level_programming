#include "main.h"

/**
 * print_triangle -  function name to print a triangle
 * @size: the size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}


	}
}
