#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the array containing the integer
 * @size: the size of array
 * @cmp: the functional pointer
 * Return: -1 if size < 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
