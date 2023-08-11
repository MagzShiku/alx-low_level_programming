#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: the array size asa parameter
 * Return: Pointer to the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h->array[i] = NULL;

	h->size = size;
	return (h);
}
