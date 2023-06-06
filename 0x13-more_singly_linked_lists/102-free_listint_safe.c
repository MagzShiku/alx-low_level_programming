#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: the list
 * This function can free lists with a loop
 * You should go though the list only once
 * Return: Should return the freed size
 * The function sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *e; /* represents existing list */
	listint_t *following_node;
	size_t i;

	e = *h;
	i = 0;

	while (e != NULL)
	{
		i++;
		following_node = e->next;
		free(e);
		e = following_node;


		if (e == *h)
		{
			h = NULL;
			break;
		}
	}
	return (i);


}
