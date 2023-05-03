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
	int d_length;
	int e;
	int f_num;

	a = 0;
	b = 0;
	c = 0;
	d_length = 0;
	e = 0;
	f_num = 0;

	while (s[d_length] != '\0')
		d_length++;

	while (a < d_length && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			f_num = s[a] - '0';
			if (b % 2)
				f_num = -f_num;

			c = c * 10 + f_num;
			e = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
if (e == 0)
	return (0);
return (c);
}
