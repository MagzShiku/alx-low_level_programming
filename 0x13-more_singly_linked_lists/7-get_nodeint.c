#include "lists.h"

/**
 * get_nodeint_at_index - this should retuen the nth node
 * @head: contains the first adress in the list of nodes
 * @index: represents the elements in the list.. much like array
 * Return: nth node in the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *e; /* represents the existing list we are using */
	unsigned int i; /* this will help us traverse the list */

	i = 0;
	e = head;

	while (i < index)
	{
		if (e == NULL)
		{
			return (NULL);
		}
		e = e->next;
		i++;
	}

	return (e);
}
