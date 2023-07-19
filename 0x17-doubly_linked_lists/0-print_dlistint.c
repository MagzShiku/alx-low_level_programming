#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the list
 * Return: the number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list_1;
	size_t num;

	list_1 = h;

	num = 0;
	while (list_1 != NULL)
	{
		printf("%d\n", list_1->n);
		list_1 = list_1->next;
		num++;
	}
	return (num);
}
