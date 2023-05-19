#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: String 1
 * @s2: string 2
 * @n: number of bytes
 * Return: Pointer to new space containing
 * s1, n bytes of s2 and NULL terminated
 * if fails, to return NULL
 * if n is >= strlen(s2) use the fill s2 string
 * if NULL is passed, treat is as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_a;
	unsigned int len_b;
	unsigned int i, j;

	char *t_len;

	len_a = 0;
	len_b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_a])
		len_a++;

	while (s2[len_b])
		len_b++;

	if (n >= len_b)
		n = len_b;

	t_len = malloc(sizeof(char) * (len_a + n + 1));

	if (t_len == NULL)
		return (NULL);

	for (i = 0; i < len_a; i++)
		t_len[i] = s1[i];

	for (j = 0; j < n; j++)
		t_len[i + j] = s2[j];

	t_len[i + j] = '\0';

	return (t_len);

}
