#include "hash_tables.h"

/**
 * hash_table_delete - this deletes a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *n;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			n = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = n;
		}
	}
	free(ht->array);
	free(ht);
}
