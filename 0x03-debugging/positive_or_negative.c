#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * positive_or_negative - Entry point
 * Description: 'to return a -ve or +ve number of a random number'
 * Return: Always 0 (Success)
 */

void positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
return;

}
