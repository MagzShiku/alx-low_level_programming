#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -sum of the two diagonals of a square matrix of integers.
 * @a: pointer to parameter 1
 * @size: size of matrix
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - i - 1];
	}

	printf("%d, %d\n", sum1, sum2);

}
