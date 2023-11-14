#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_step = (int) sqrt(size);
	size_t left = 0;
	size_t right = jump_step < size ? jump_step : size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
		{
			return (left);
		}
		else if (array[left] < value)
		{
			left = right + 1;
			right = (left + jump_step) < size ? (left + jump_step) : size - 1;

		}
		else
		{
			break;
		}


	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = right; i >= left; i--)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (-1);
		}
	}
	return (-1);
}
