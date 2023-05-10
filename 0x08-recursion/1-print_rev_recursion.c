#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: the pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{	
		printf("\n");
		return;
	}
	else 
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
