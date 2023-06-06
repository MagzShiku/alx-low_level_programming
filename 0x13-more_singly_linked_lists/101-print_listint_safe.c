#include "lists.h"

/**
 * check_loop_node - checks for nodes
 * @head: Contsins address to loop
 * Return: 0 if the list has looped qualities
 * Return number of special nodes
 */

size_t check_loop_node(const listint_t *head)
{
	const listint_t *drag;
	const listint_t *speed;
	size_t node_count;

	node_count = 1;
	drag = head->next;
	speed = ((head->next)->next);

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	while (speed && speed->next)
	{
		if (drag == speed)
		{
			drag = head;
			while (drag != speed->next)
			{
				node_count++;
				drag = drag->next;
				speed = speed->next;
			}
			return (node_count);
		}
		drag = drag->next;
		speed = (speed->next)->next;
	}
return (0);

}

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
	const listint_t *e;  /* e represents the existing list */
	const listint_t *node_after;

	e = head;
	node_count = 0;

	while (e != NULL)
	{
		printf("[%p] %d\n", (void *)e, e->n);
		node_count++;

		node_after = e->next;

		if (node_after != NULL && node_after >= e)
		{
			printf("-> [%p] %d\n", (void *)node_after, node_after->n);
			exit(98);
		}
		e = node_after;
	}
return (node_count);

}
