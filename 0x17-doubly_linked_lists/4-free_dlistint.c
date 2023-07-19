#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head:vthe first node - entry point
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node_n;
	dlistint_t *following;

	node_n = head;
	while (node_n != NULL)
	{
		following = node_n->next;

		free(node_n);
		node_n = following;
	}
}
