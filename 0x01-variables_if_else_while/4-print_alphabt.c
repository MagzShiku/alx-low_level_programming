#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * main - Entry Point
 * description: print alphabet without q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
		continue;
		}

		putchar(x);

	}

	putchar('\n');
	return (0);
}
