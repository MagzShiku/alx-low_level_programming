#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string whose pointer to check
 * Return: NULL if str = NULL
 * pointer if successful & NULL if memory is insufficient
 */

char *_strdup(char *str)
{
	char *_copy;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	_copy = malloc(len * sizeof(char));

	if (_copy == NULL)
		return (NULL);

	return (strcpy(_copy, str));

}
