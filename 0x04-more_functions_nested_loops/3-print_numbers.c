#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function name to print numbers
 * Return: 0 when successful
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
