#include "hash_tables.h"

/**
 * shash_table_create - creates hash table
 * @size: size of array
 * Return: pointer to new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;
	unsigned long int i;
	
	h = malloc(sizeof(shash_table_t));
	if (h == NULL)
		return (NULL);
	
	h->size = size;
	
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
		h->array[i] = NULL;
	
	h->shead = NULL;
	h->stail = NULL;
	
	return (h);
}

/**
 * shash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key to add
 * @value: value to add
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *n_node;
	shash_node_t *tmp;
	
	if (ht == NULL || key == NULL || value == NULL)
		
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				
				return (0);
			
			return (1);
		}
		tmp = tmp->next;
	}
	
	n_node = malloc(sizeof(shash_node_t));
	if (n_node == NULL)
		return (0);
	
	n_node->key = strdup(key);
	
	if (n_node->key == NULL)
	{
		free(n_node);
		return (0);
	}
	
	n_node->value = strdup(value);
	if (n_node->value == NULL)
	{
		free(n_node->key);
		free(n_node);
		return (0);
	}

	n_node->next = ht->array[idx];
	ht->array[idx] = n_node;
	
	if (ht->shead == NULL)
	{
		ht->shead = n_node;
		ht->stail = n_node;
	}
	
	else if (strcmp(n_node->key, ht->shead->key) < 0)
	{
		n_node->snext = ht->shead;
		ht->shead->sprev = n_node;
		ht->shead = n_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, n_node->key) < 0)
			tmp = tmp->snext;
		n_node->snext = tmp->snext;
		if (tmp->snext != NULL)
			tmp->snext->sprev = n_node;
		else
			ht->stail = n_node;
		
		n_node->sprev = tmp;
		tmp->snext = n_node;
    }
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the sorted hash table
 * @key: key to search for
 * Return: value 
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;
	
	if (ht == NULL || key == NULL)
		return (NULL);
	
	idx = key_index((const unsigned char *)key, ht->size);
	
	tmp = ht->array[idx];
	
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int first = 1;
	
	if (ht == NULL)
		return;
	
	printf("{");
	
	temp = ht->shead;
	
	while (temp != NULL)
	{
		if (first)
			first = 0;
		else
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
    }
	printf("}\n");
}

/**
 * shash_table_print_rev - prints hash table in reverse
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *tmp;
    int flag;

    flag = 1;

    if (ht == NULL)
	    return;

    printf("{");
    tmp = ht->stail;
    while (tmp != NULL)
    {
    	if (flag)
		flag = 0;
	else
		printf(", ");

	printf("'%s': '%s'", tmp->key, tmp->value);
	tmp = tmp->sprev;

    }
    printf("}\n");
}

/**
 * shash_table_delete - this deletes a hash table
 * @ht: the hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp;
	shash_node_t *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}
