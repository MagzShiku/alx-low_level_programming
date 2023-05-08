#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: Pointer to the string in question
 * @accept: counts the length of a portion of string in accept
 * Return: Returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (accept[j] == '\0')
			return (i);
	}
return (i);
}

