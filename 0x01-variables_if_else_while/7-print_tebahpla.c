#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Descriptoin: Write a program that prints the lowercase alphabe
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);


}

