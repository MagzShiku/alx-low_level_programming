#include "main.h"
#include <stdio.h>

/**
 * print_number - function name
 * @n: parameter
 * Return: 0 for success
 */

void print_number(int n)
{
unsigned int a = n;

if (n < 0)
{
	putchar(45);
	a = -a;
}
if (a / 10)
{
	print_number(a / 10);
}
	putchar(a % 10 + '0');
}
