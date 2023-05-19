#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: minimum value of the array
 * @max: maximum value of array
 * order array from min to max
 * Return: pointer to array
 * if min > max retun NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *new_arr;
	int i;

	if (min > max)
		return (NULL);

	new_arr = malloc(sizeof(int) * (max - min + 1));

	if (new_arr == NULL)
		return (NULL);


	for (i = 0; min <= max; i++, min++)
		new_arr[i] = min;

	return (new_arr);


}
