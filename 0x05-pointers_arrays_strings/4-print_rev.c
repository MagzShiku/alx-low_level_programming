#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print in reverse
 * @s: string to be reverse strung
 * Return: String
 */

void print_rev(char *s)
{
	int j;
	int k;

	j = strlen(s);

	k = j - 1;
	while (k >= 0)
	{
		_putchar(s[k]);
		k--;
	}
	_putchar('\n');
}
