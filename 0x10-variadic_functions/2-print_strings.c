#include "variadic_functions.h"
#include <string.h>


/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: The strings
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	const char *str;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(lst, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		 printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
va_end(lst);

printf("\n");
}
