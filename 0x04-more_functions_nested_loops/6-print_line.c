#include "main.h"
#include <stdio.h>

/**
 * print_line - function name
 * @n: number of times to print the _
 * Return: 0 for success
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		putchar(95);
	}
	putchar('\n');
}
