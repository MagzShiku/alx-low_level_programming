#include "lists.h"

/**
 * unique_node_in_loop - checks for unique node in loop
 * @head: checks for the first address in node of link
 * Return: unique nodes found
 * or 0 if list is not looped
 */

size_t unique_node_in_loop(const listint_t *head)
{
	const listint_t *drag;
	const listint_t *speed;
	size_t count_nodes;

	speed = head;
	drag = head;
	count_nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	while (speed && speed->next)
	{
		drag = drag->next;
		speed = speed->next->next;

		if (drag == speed)
			break;
	}

	if (speed == NULL || speed->next == NULL)
		return (0);

	speed = speed->next;

	while (speed != drag)
	{
		speed = speed->next;
		count_nodes++;
	}

	return (count_nodes);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the adress of the firstnode
 * Return: NU,ber of nodes printed
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 * instead of using harshed table we use
 * dynamically allocated array (visited_nodes)
 * to keep track of visited node values
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *drag;/* current list */
	const listint_t *speed;
	size_t count_nodes;
	const listint_t *com_loop; /* represents where the loop will start */

	count_nodes = 0;
	drag = head;
	speed = head;

	while (speed && speed->next)
	{
		drag = drag->next;
		speed = speed->next->next;

		if (drag == speed)
			break;
	}

	if (speed == NULL || speed->next == NULL)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count_nodes++;
			head = head->next;
		}
	}
	else
	{
		com_loop = drag;
		while (head != com_loop)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count_nodes++;
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
		count_nodes++;

		head = head->next;
		while (head != com_loop)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count_nodes++;
			head = head->next;
		}
	}
	return (count_nodes);
}
