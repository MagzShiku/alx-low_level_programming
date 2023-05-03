#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - a function that converts a string to an integer
 * @s: The string
 * Return: 0 if no numbers in the string, do not use long
 */

int _atoi(char *s)
{
	int a;
	int b;
	int c;

	a = 1;
	b = 0;
	c = 0;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
		{
			a = -1;
		}
		else if (s[c] >= '0' && s[c] <= '9')
		{
			b = b * 10 + (s[c] - '0');
		}
		else if (b > 0)
		{
			break;
		}
		c++;
	}
return (a * b);
}
