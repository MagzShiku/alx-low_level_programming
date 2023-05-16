#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * Return: pointer to new space
 * empty string is NULL is passed
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *conctd;
	size_t len_s1;
	size_t len_s2;

	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	conctd = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (conctd == NULL)
		return (NULL);

	strcpy(conctd, s1);
	strcat(conctd, s2);

	return (conctd);


}
