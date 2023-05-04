#include "main.h"
#include <string.h>

/**
 * leet - hat encodes a string into 1337.
 * @str: the string to be encoded
 * Return: Always 0
 *
 */

char *leet(char *str)
{
	int i;
	int j;

	char tr[] = "AEOTL";
	char trw[] = "43071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; tr[j]; j++)
		{
			if (str[i] == tr[j] || str[i] == tr[j] + 32)
			{
				str[i] = trw[j];
			}

		}
	}
	return (str);
}
