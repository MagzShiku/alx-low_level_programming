#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Descriptoin: all possible combinations of numbrs 0-9
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);

		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
