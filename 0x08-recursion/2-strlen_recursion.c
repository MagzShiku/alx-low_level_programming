#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - printing the length of string
 * @s: the string whose length is to be counted
 * Return:  Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
