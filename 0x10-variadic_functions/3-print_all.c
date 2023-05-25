#include "variadic_functions.h"

/**
 * print_all - function that prints anything i parameter
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *separator = "";
	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case'c':
					printf("%s%c", separator, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(lst, double));
					break;
				case 's':
					str = va_arg(lst, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;

			}
			separator = ", ";
			i++;
		}
	}
va_end(lst);
printf("\n");
}
