#include "main.h"

/**
 * print_numbers - function name, print from 0 to 9
 * Return: Always 0 for success
 */

void print_numbers(void)
{
	 char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	 _putchar('\n');
}
