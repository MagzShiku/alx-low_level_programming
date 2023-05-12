#include "main.h"
#include <string.h>
#include <stddef.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Parameter 1
 * @b: Parameter 2
 * @n: Integer, parameter 3
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *) s;
	unsigned char val = (unsigned char) b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p++ = val;
	}
	return (s);
}
