#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character
 * @str: the string to be filtered
 * Return: Always 0
 */

void puts2(char *str)
{
	int a;
	int b;

	a = strlen(str);

	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);

	}
	_putchar('\n');

}
