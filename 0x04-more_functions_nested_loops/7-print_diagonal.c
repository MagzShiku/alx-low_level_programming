#include "main.h"
#include "stdio.h"

/**
 * print_diagonal - function name to print diagonal lines
 * @n: nunber of times this parameter is run
 * Return: 0 for success
 */

void print_diagonal(int n)
{

	int i;
	int j;

	if (n <= 0)
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
}
