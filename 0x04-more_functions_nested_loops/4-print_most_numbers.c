#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function name
 * Return: 0 for success
 */

void print_most_numbers(void)
{
char a;

for (a = '0'; a <= '9'; a++)
{
	if (a == '2' || a == '4')
	{
		continue;
	}

putchar(a);
}
putchar('\n');
}
