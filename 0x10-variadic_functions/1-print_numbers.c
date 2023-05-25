#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameter
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: THe numbers printed
 * If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		/* print the numer in question */

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
/* clean up the argument list in variable */
	va_end(lst);
/* print new line */
	printf("\n");

}
