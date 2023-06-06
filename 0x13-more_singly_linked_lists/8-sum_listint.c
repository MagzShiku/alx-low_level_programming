#include "lists.h"

/**
 * sum_listint - returns sum of all int values in list
 * @head: accesses the first address in the list
 * Return: Sum of all elements
 * if list empty, to return 0
 */

int sum_listint(listint_t *head)
{
	/* a will represent sun and e the list we are working on */
	int a;
	listint_t *e;

	a = 0;
	e = head;

	if (head == NULL)
	{
		return (a);
	}

	while (e != NULL)
	{
		a = a + (e->n);
		e = (e->next);
	}
	return (a);
}
