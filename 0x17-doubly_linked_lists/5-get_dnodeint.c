#include "lists.h"

/**
 * get_dnodeint_at_index - functin that returns the nth node
 * @head: the first node
 * @index: the position of node starting from 0
 * Return: NULL if node exists
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;
	dlistint_t *now_node;

	a = 0;
	now_node = head;

	while (now_node != NULL && a < index)
	{
		now_node = now_node->next;
		a++;
	}
	if (a != index)
	{
		return (NULL);
	}
	return (now_node);
}
