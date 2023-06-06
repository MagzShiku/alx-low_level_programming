#include "lists.h"

/**
 * reverse_listint - this reverses the nodes in the list
 * @head: first node
 * Return: pointer to first node of reversed list
 * only use 1 loop
 * not mallof, no free or arrays
 * you are only allowed to declare 1 function
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *new_list;
	
	i = *head;
	new_list = NULL;

	while (i != NULL)
	{
		*head = (*head)->next;
		i->next = new_list;
		new_list = i;
		i = *head;
	}

	*head = new_list;
	return new_list;
}
