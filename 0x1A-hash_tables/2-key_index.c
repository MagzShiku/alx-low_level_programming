#include "hash_tables.h"

/**
 * key_index -  a function that returns the index of a key.
 * @key: the key being made hash
 * @size: the size of hash block
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	/* the hash value*/

	i = hash_djb2(key);
	return (i % size);
}
