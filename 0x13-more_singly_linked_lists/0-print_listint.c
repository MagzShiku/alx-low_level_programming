#include "lists.h"

/**
 * print_listint - a function that peints ele' of listint_t
 * listint_t : a custom data type representing a linked list of ints
 * @h: pointer to listint_t
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t list_n;

	list_n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		list_n++;
		h = h->next;
	}
	return (list_n);
}
