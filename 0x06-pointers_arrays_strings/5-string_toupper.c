#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - convert all lower case letters in a string to uppre
 * @str: Parameter
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	char *c = str;


	while (*c)
	{
		if (*c >= 97 && *c < 122)
			*c -= 32;
		c++;

	}
return (str);

}
