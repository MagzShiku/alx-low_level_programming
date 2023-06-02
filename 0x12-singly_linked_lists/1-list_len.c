#include "lists.h"

/**
 * list_len -  returns the number of elements in linked list_t list
 * @h: holds the elements
 * Return: number of elements in lists_t
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
