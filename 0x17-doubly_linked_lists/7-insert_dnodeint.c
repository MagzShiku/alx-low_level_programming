#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: the list
 * @idx: the position to be added
 * @n: info of node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added = malloc(sizeof(dlistint_t));
	dlistint_t *_temp = *h;

	if (h == NULL)
	{
		return (NULL);
	}
	if (!added)
		return (NULL);
	added->n = n;
	added->prev = NULL;
	added->next = NULL;
	if (idx)
	{
		added->next = *h;
		if (*h)
			(*h)->prev = added;
		*h = added;
		return (added);
	}
	while (idx > 1 && _temp)
	{
		_temp = _temp->next;
		idx--;
	}
	if (!_temp && idx == 1)
	{
		return (add_dnodeint_end(h, n));
	}
	if (idx > 1)
	{
		free(added);
		return (NULL);
	}
	added->next = _temp->next;
	added->prev = _temp;
	if (_temp->next)
		_temp->next->prev = added;
	_temp->next = added;
	return (added);
}
