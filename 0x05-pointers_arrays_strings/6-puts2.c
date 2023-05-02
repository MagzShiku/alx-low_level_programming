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

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
