#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of arguments passed into the function
 * Return: the result
 * If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list lst;

	result = 0;

	va_start(lst, n);

	for (i = 0; i < n; i++)
		result += va_arg(lst, int);
	va_end(lst);
	return (result);

}
