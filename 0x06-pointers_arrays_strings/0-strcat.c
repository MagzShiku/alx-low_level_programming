#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest:  String variable 1
 * @src: Adress of string variable 2
 * Return:  A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	size_t i;
	size_t dest_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);

}
