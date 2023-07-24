#include "main.h"
int _atoi(char *s)
{
	int i = 0, j = 1;

	if (*s == '-')
	{
		j = -1;
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			i = i * 10 + (*s - '0');
		else
			break;
		s++;
	}
	return (i * j);
}
