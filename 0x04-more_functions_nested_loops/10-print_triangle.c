#include "main.h"
#include <stdio.h>


/**
 * print_triangle - function name
 * @size: size
 * Return: 0 for success
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;
	
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (c = size - a; c >= 1; c--)
			{
				putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				putchar(35);
			}
			putchar('\n');
		}
		
	}
	
}

