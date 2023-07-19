#include "lists.h"
/**
 * sum_dlistint - that returns the sum of all the data (n) of a list
 * @head: the first node
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result;
	dlistint_t *now_node;

	result = 0;
	now_node = head;

	while (now_node)
	{
		result += now_node->n;
		now_node = now_node->next;
	}
	return (result);
}
