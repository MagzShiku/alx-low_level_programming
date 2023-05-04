#include <string.h>
#include "main.h"

/**
 * _strncat -  to concatinate two strings
 * @dest: parameter 1
 * @src: Parameter 2
 * @n: Parameter 3
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	size_t dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}
