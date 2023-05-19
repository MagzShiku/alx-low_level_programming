#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: poiter previously allocated
 * old_size: old block size
 * @new_size: size of new block
 * contents to be located starting gtom lowest ptr to min of old and new
 * if new_size > old_size .... add momory to be initialized
 * if new_size == old_size ... do nothing but return ptr
 * if ptr is NULL... the call is equivalent to malloc(new_size)
 * for all values of old_size & new_size
 * if new_size == 0 && ptr != NULL... call is = free(ptr). return NULL
 * free ptr
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;
	unsigned int small_size;
	
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_p = malloc(new_size);

	if (new_p == NULL)
	{
		return (NULL);
	}

	small_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_p, ptr, small_size);
	free(ptr);

	return (new_p);

}
