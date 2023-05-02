#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of arrays and integers
 * @a: parameter 1
 * @n: parameter 2
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);

		if (arr != (n - 1))
		{
			printf(", ");
		}
	}

printf("\n");
}
