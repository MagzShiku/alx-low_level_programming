#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: contains fist address in the list
 * Return: the number of nodes in the list
 * can print lists with a loop
 * should go through the list only once
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count;
	const listint_t *e;

	e = head;
	node_count = 0;

	while (e != NULL)
	{
		printf("[%p] %d\n", (void *)e, e->n);
		node_count++;

		if (e <= e->next)
		{
			printf("-> [%p] %d\n", (void *)e->next, e->next->n);
			exit(98);
		}
		e = e->next;
	}
return (node_count);

}
