#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 *
 * Return: pointer to the created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *temp;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            if (temp->value == NULL)
                return (0);
            return (1);
        }
        temp = temp->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    /* add new_node to sorted linked list */
    if (ht->shead == NULL)
    {
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else if (strcmp(new_node->key, ht->shead->key) < 0)
    {
        new_node->snext = ht->shead;
        ht->shead->sprev = new_node;
        ht->shead = new_node;
    }
    else
    {
        temp = ht->shead;
        while (temp->snext != NULL && strcmp(temp->snext->key, new_node->key) < 0)
            temp = temp->snext;
        new_node->snext = temp->snext;
        if (temp->snext != NULL)
            temp->snext->sprev = new_node;
        else
            ht->stail = new_node;
        new_node->sprev = temp;
        temp->snext = new_node;
    }

    return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the sorted hash table
 * @key: key to search for
 *
 * Return: value associated with the element, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *temp;

    if (ht == NULL || key == NULL)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
            return (temp->value);
        temp = temp->next;
    }

    return (NULL);
}

/**
 * shash_table_print - prints the sorted hash table
 * @ht: pointer to the sorted hash table
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
 * shash_table_print_rev - prints the sorted hash table in reverse
 * @ht: pointer to the sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *temp;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");
    temp = ht->stail;
    while (temp != NULL)
    {
        if (first)
            first = 0;
        else
            printf(", ");
        printf("'%s': '%s'", temp->key, temp->value);
        temp = temp->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp, *next;
	
	if (ht == NULL)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
	{
		next = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}
    }
    free(ht->array);
    free(ht);
}

