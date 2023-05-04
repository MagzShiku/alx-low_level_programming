#include "main.h"
#include <string.h>

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: Parameter 1
 * @n: parameter 2
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int *p;
	int i;
	int arrn;

	p = a + n - 1;
	for (i = 0; i < n / 2; i++)
	{
		arrn = a[i];
		a[i] = *p;
		*p = arrn;
		p--;
	}

}
