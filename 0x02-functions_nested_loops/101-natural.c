#include <sdtio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int sum;

	sum = 0;

	for (a = 0; a < 1024; a++)
	{
	if ((a % 3) == 0 || (a % 5) == 0)
		sum + = a;
	}

	printf("%d\n", sum);
	return (0);
}
