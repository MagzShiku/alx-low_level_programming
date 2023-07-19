#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: the list
 * @idx: the position to be added
 * @n: info of node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *added = malloc(sizeof(dlistint_t));
	dlistint_t *_temp = *h;

	if (h == NULL)
		return (NULL);
	if (added == NULL)
		return (NULL);
	added->n = n;
	added->next = NULL;
	added->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = added;
		added->next = *h;
		*h = added;
		return (added);
	}
	for (; idx > 1; idx--)
	{
		if (_temp == NULL)
		{
			free(added);
			return (NULL);
		}
		_temp = _temp->next;
	}
	if (!_temp)
	{
		if (*h != NULL)
		{
			return (add_dnodeint_end(h, n));
		}
			else
		{
			free(added);
			return (NULL);
		}
	}
	added->prev = _temp;
	added->next = _temp->next;
	if (_temp->next != NULL)
		_temp->next->prev = added;
	_temp->next = added;
	return (added);
}
