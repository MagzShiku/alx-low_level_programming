#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: checks for the fisrt adrees in the list of nodes
 * Return: he address of the node where the loop starts
 * or NULL if there is no loop
 * not allowed to use malloc, free or arrays
 * only declare a maximum of two variables in your function
 */

listint_t *find_listint_loop(listint_t *head)
{
	int node_count;
	int i;
	listint_t *_temp;
	listint_t *a;
	listint_t *b;

	if (head == NULL)
		return (NULL);
	node_count = 1;
	_temp = head;
	while (_temp->next != NULL)
	{
		node_count++;
		_temp = _temp->next;
	}

	a = head;
	for (i = 0; i < node_count; i++)
	{
		a = a->next;
	}

	b = head;
	while (a != b)
	{
		a = a->next;
		b = b->next;
	}

	return (a);
}
