#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name.
 * @name: the name
 * @f:the function pointer
 * @*: the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
