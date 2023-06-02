#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - unction that adds a new node at the end of a list_t list.
 * @head: top of node
 * @str: character string
 * Return:  address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	list_t *j;

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

	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	j = *head;

	while (j->next != NULL)
		j = j->next;

	j->next = i;
	return (i);

}
