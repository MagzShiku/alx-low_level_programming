#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked -   a function that allocates memory using malloc
 * @b: the parameter to be aloocated
 * Return: Pointer to memory for b
 * if fails, terminate with status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		fprintf(stderr, "Memory allocation gailed.\n");
		exit(98);
	}
	return (p);
}
