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
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
