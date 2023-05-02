#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps intergers
 * @a: integer 1
 * @b: integer 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
