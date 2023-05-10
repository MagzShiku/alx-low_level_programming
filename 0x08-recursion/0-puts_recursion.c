#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts_recursion - to print a string followed by a new line
 * @s: the string to be printed
 * Return: Always 0
 */

void _puts_recursion(char *s) /*the prototype*/
{
	if (*s == '\0')
	{
		return;
		printf("\n");
	}
	else
	{
	_putchar("%c"*s);
	_puts_recursion(++s);
	_putchar('\n');
	}

}

