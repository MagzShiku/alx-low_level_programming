#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description:  prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}

	printf("\n");
	return (0);
}
