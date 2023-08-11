#include "harsh_tables.h"

/**
 * hash_djb2 -  hash function implementing the djb2 algorithm.
 * @str: convert string to hash
 * Return: the value of teh hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h = 5381;
	int c;

	while ((c = *str++))
		h = ((h << 5) + h) + c;
	return (h);
}
