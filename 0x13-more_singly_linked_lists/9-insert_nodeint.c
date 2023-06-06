#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: checks for the head
 * @idx: the nth index parameter where new node will come in
 * @n: number of nodes in the list
 * Return: Address of new node
 * return NULL if it fails
 * if not possible to add new node at idx index
 * ...do not add new node
 * ...return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_n; /* new node to be added */
	listint_t *e; /* existing list */
	unsigned int i;

	node_n = malloc(sizeof(listint_t));
	node_n->n = n;
	/* fist check is list is empty */
	if (head == NULL || node_n == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		node_n->next = *head;
		*head = node_n;
		return (node_n);
	}
	if (idx == 0)
	{
		node_n->next = *head;
		*head = node_n;
		return (node_n);
	}
	e = *head;
	i = 0;
	/* wewe care going through the list to check for poistion */
	while (i < (idx - 1))
	{
		if (e == NULL)
		{
			free(node_n);
			return (NULL);
		}
		e = e->next;
		i++;
	}
	node_n->next = e->next;
	e->next = node_n;
	return (node_n);
	/*here we are connecting the new node with the rest of list*/
}
