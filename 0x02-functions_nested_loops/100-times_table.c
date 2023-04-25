#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print the n times table
 * @n: the integer for n
 * Return: Always void (Success)
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
	for (b = 0; b <= n; b++)
	{
	c = a * b;
	if (b != 0)
	{
		_putchar(',');
		_putchar(' ');
	if (c < 100)
	{
		_putchar(' ');
	}
	if (c < 10)
	{
		_putchar(' ');
	}
	}
	if (c >= 100)
	{
		_putchar((c / 100) + '0');
		_putchar(((c / 10)) % 10 + '0');
	}
	else if (c >= 10)
	{
		_putchar(' ');
		_putchar((c / 10) + '0');
	}
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
