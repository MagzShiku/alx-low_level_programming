#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @str: the string
 * Return: the sting rot13 versiom
 */

char *rot13(char *str)
{
	char *c = str;
	char *_output = strdup(str);
	char *str_out = _output;

	if (_output == NULL)
		return (NULL);

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			str_out = ((*c - 'a') + 13) % 26 + 'a';

		else if (*c >= 'A' && *c <= )
			str_out = ((*c - 'A') + 13) % 26 + 'A';
		else
			str_out = *c;

		s++;
		str_out++;
	}
*str_out = '\0';

return (_output);
}
