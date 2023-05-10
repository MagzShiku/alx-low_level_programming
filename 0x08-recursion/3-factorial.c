#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * factorial - prints factorial(the product of absolute values till n)
 * @n: the furthest number whose product is to be prinred
 * Return: -1 to indicate error if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
