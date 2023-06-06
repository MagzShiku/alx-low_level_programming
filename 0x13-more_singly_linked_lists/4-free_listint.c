#include "lists.h"

/**
 * free_listint -  this releases memory previously located for a list
 * @head: checks for the first adress
 * Return: Freed space
 */

void free_listint(listint_t *head)
{
	listint_t *i; /* to represent the cirrent node */
	listint_t *n; /* to represent the next node*/

	i = head;

	while (i != NULL)
	{
		n = i->next;
		free(i);
		i = n;
	}
}
