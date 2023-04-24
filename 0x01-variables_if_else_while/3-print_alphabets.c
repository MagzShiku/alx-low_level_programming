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
	char x;
	char y;

	x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		x++;
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
		y++;
	}
	putchar ('\n');
	return (0);
}
