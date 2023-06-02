#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints elements in lists_t
 * @h: containc the elements
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
