#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *
 * main -entry point
 * @argc: aurgument count
 * @argv: aurgument vector
 * Return: 0 and 1(in case of error)
 */
int main(int argc, char *argv[])
{
	int a;
	int b = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	while (a > 0)
	{
		if (a >= 25)
			a -= 25;
		else if (a >= 10)
			a -= 10;
		else if (a >= 5)
			a -= 5;
		else if (a >= 2)
			a -= 2;
		else
			a -= 1;

		b++;
	}

	printf("%d\n", b);

	return (0);
}
