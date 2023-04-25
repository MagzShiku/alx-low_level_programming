#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 0, c = 0;

	int largest;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}


/**
 * largest_number - returns the largest number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
