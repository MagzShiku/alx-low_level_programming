#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: aurgument count
 * @argv: aurgument vector
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int addtn = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}

		addtn += atoi(argv[a]);
	}

	printf("%d\n", addtn);

	return (0);
}
