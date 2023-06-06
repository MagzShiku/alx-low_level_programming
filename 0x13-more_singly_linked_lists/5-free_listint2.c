#include "lists.h"

/**
 * free_listint2 - this function frees a list
 * then sets the head to NULL
 * @head: checks for head
 * Return: freed list memory
 */

void free_listint2(listint_t **head)
{
	listint_t *i; /* represents current list */
	listint_t *n; /* represents the next node */

	i = *head; /* iterates and traverses from head pointer */

	while (i != NULL)
	{
		n = i->next;
		free(i);
		i = n;
	}
	*head = NULL; /* this function sets head to NULL */
}
