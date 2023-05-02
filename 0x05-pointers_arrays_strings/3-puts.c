#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts - function name to print string
 * @str: the string to be strung
 * Return: String
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
