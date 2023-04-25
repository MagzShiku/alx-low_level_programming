#include <stdio.h>

/**
 * main - entry point to print 50 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int z;
	unsigned long a = 0;
	int b = 1;
	int sum;

	for (z = 0; z < 50; z++)
	{
	sum = a + b;
	printf("%u", sum);

	a = b;
	b = sum;

	if (z == 49)
	{
	printf("\n");
	}
	else
	{
		printf(",");
	}
	}
	return (0);
}
