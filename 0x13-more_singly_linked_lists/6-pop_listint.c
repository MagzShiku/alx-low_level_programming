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

	if (head == NULL || *head == NULL)
		return (0);

	d = (*head)->n;
	tmp_var = (*head)->next;
	free(*head);
	*head = tmp_var;

	return (d);

}
