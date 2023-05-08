#include "main.h"
#include <string.h>

/**
 * _strchr -  function that locates a character in a string
 * @s: pointer to string
 * @c: The character to be located
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int element;

	for (element = 0; s[element] >= '\0'; element++)
	{
		if (s[element] == c)
		{
			return (s + element);
		}
	}
	return ('\0');
}
