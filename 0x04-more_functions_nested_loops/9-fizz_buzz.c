#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: this prints Fizz, Buzz & FizzBuzz depending on the modulus
 * Return: 0 for Success
 */

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)

			printf("Fizz");

		else if (i % 5 == 0 && i % 3 != 0)

			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)

			printf("FizzBuzz");

		else if (i == 1)
			printf("%i", i);

		else
			printf("%d", i);

		if (i < 100)
			printf(" ");

	}
printf("\n");
return (0);
}
