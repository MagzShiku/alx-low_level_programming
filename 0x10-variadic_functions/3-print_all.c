#include "variadic_functions.h"

/**
 * print_all - function that prints anything i parameter
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, k;
	char *str, fmt, *separator = "";
	float flt;
	va_list lst;

	va_start(lst, format);

	while (format[i] != '\0')
	{
		fmt = format[i];

	if (fmt == 'c')
	{
		k = va_arg(lst, int);
		printf("%s%c", separator, k);
	}
	else if (fmt == 'i')
	{
		k = va_arg(lst, int);
		printf("%s%d", separator, k);
	}
	else if (fmt == 'f')
	{
		flt = va_arg(lst, double);
		printf("%s%f", separator, flt);
	}
	else if (fmt == 's')
	{
		str = va_arg(lst, char *);
		if (str == NULL)
			printf("nil");
		else
		printf("%s%s", separator, str);
	}
	separator = ", ";
	i++;
	j++;
	}
va_end(lst);
printf("\n");
}
