#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string
 * Return: Always 0
 */

char *cap_string(char *str)
{
	char *i = " \t\n,;.!?\"(){}";
	char *c = str;

	while (*c)
	{
		if (*c >= 'a' && *c < 'z')
		{
			if (c == str || strchr(i, *(c - 1)) != NULL)
			{
				*c -= 32;
			}

		}

		c++;
	}

return (str);
}
