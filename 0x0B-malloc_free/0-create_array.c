#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array of chars, and initializes with c
 * @size: size of array
 * @c: character to be initialized
 * Return: Null if size is 0, pointer to array or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	
		return (NULL);
	

	char *array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	
		return (NULL);
	

	for (unsigned int i = 0; i < size; i++)
	
		array[i] = c;
	

	return (array);
	
}
