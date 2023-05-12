#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: aurgument count
 * @argv: aurgument vector
 * Return:  Always 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);

	return (0);

}
