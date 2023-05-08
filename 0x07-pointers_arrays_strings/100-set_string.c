#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: parameter 1
 * @to: parameter 2
 * Return: Void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
