#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *  _calloc - a function that allocates memory for an array, using malloc
 *  @nmemb: member 1
 *  @size: byte size of memb
 *  Return: pointer to allocated memory
 *  Memory set to 0
 *  if memb || size == 0, _calloc to return NULL
 *  if malloc fails, to return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);
	return (p);
}
