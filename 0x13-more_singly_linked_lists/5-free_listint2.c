#include "lists.h"

/**
 * free_listint2 - this function frees a list
 * then sets the head to NULL
 * @head: checks for head
 * Return: freed list memory
 */

void free_listint2(listint_t **head)
{
	listint_t *_test; /* to temporarily hold the values */

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		_test = (*head)->next;
		free(head);
		*head = _test;
	}
	*head = NULL; /* this function sets head to NULL */
}
