#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half -  prints 2nd half of the string
 * @str: string to be prunt
 * Return: n characters if the number of characters is odd
 */

void puts_half(char *str)
{
	int length_of_the_string;
	int i;
	int n;

	length_of_the_string = strlen(str);
	n = (length_of_the_string - 1) / 2;

	if (length_of_the_string % 2 == 0)
	{
	for (i = n + 1; i < length_of_the_string; i++)
		_putchar(str[i]);
	}
	_putchar('\n');
}
