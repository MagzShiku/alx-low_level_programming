#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: first node
 * @n: the nth node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added;
	dlistint_t *tail_node;

	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
	{
		return (NULL);
	}

	added->n = n;
	added->next = NULL;

	if (*head == NULL)
	{
		added->prev = NULL;
		*head = added;
	}
	else
	{
		tail_node = *head;

		while (tail_node->next != NULL)
		{
			tail_node = tail_node->next;
		}

		tail_node->next = added;
		added->prev = tail_node;

	}
	return (added);
}
