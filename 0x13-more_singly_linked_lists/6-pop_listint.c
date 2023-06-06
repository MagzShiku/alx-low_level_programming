#include "lists.h"

/**
 * pop_listint - so this will delete the head and returns the data
 * @head: checks the address of the  of the first node
 * Return: 0 if the list is empty
 * return dat
 */

int pop_listint(listint_t **head)
{
	int d; /* represents data */
	listint_t *tmp_var; /* store data in a temporary variable  */

	d = ((*head)->n);
	tmp_var = *head;
	*head = ((*head)->next);

	if (*head == NULL)
	{
		return (0);
	}

	free(tmp_var);
	return (d);

}
