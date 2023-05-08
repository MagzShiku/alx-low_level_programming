#include "main.h"
#include <string.h>

/**
 * _strstr -   a function that locates a substring.
 * @haystack: string
 * @needle: substring to be located
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		int i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;

			} while (haystack[i] == needle[i]);
		}
	haystack++;
	}
return ('\0');
}
