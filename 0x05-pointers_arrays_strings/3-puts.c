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
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
_putchar('\n');
}
