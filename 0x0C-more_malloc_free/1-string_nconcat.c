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
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int total_len;
	char *t_len;

	if (s1 == NULL) /* if null is passed treat is as emty string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + (n < len_s2 ? n : len_s2);

	t_len = malloc(sizeof(char) * (total_len + 1));

	if (t_len == NULL)
		return (NULL);

	strncpy(t_len, s1, len_s1);
	strncat(t_len, s2, n);

	return (t_len);
		
}
