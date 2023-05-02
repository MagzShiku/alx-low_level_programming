#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - what is the dirrerece between this and the previus?
 * @s: the string to be reversed
 * Return: string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	int test;

	i = strlen(s);

	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		test = s[j];
		s[j] = s[k];
		s[k] = test;
	}

}
