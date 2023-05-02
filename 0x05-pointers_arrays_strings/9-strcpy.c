#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - that copies the string pointed to by src
 * @dest: parameter 1
 * @src: parameter 2
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = -1;

	do {
	a++;
	dest[a] = src[a];

	} while ((src[a]) != '\0');

return (dest);
}
