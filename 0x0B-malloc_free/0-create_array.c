#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * create_array - creates an array of chars, and initializes with c
 * @size: size of array
 * @c: character to be initialized
 * Return: Null if size is 0, pointer to array or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);

	}

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);

	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;

	}
	return (str);

}
