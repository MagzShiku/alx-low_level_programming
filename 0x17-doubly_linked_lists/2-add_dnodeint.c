#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: the first node
 * @n: the position to add the node at
 * Return: the address of the new element
 * NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_position;

	new_position = malloc(sizeof(dlistint_t));
	if (new_position == NULL)
	{
		return (NULL);
	}

	new_position->n = n;
	new_position->prev = NULL;
	new_position->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_position;
	}
	*head = new_position;

	return (new_position);
}
