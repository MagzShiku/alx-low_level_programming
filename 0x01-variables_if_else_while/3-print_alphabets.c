#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Point of entry
 * Description: Sorting alphabet a-z
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;

	}

	x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar ('\n');
	return (0);
}
