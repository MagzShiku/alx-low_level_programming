#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the top portion of the node
 * @str: character string
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *i;

	i = malloc(sizeof(list_t));

	if (i == NULL)
		return (NULL);

	i->str = strdup(str);

	if (i->str == NULL)
	{
		free(i);
		return (NULL);
	}

	i->len = strlen(i->str);
	i->next = *head;
	*head = i;

	return (i);
}
