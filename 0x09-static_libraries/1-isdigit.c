#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - function name. checks for a digit 0-9
 * @c: parameter to be checked
 * Return: 1 if yes, 0 if no
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
