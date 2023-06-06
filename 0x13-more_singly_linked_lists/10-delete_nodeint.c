#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a point in the list
 * @head: checks for head
 * @index: checks for the position if index starts at 0
 * Return: 1 if successful
 * Return -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *_test; /* temporary variable */
	listint_t *e; /* the existing list  */
	unsigned int i;
	listint_t *gone_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		_test = *head;
		*head = (*head)->next;
		free(_test);
		return (1);
	}

	e = *head;

	/* traversing the list */
	for (i = 0; i < index - 1 && e != NULL; i++)
	{
		e = e->next;
	}
	if (e == NULL || e->next == NULL)
	{
		return (-1);
	}
	gone_node = e->next; /* relinks the remaining nodes */
	e->next = gone_node->next;
	free(gone_node); /* removes pevious node's momory */
	return (1);
}
