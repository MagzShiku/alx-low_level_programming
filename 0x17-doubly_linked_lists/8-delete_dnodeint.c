#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node
 * @head: the first node
 * @index: the index position of deletion
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *_delete = *head;

	if (!(*head))
	{
		return (-1);
	}

	if (index == 0)
	{
		if (_delete->next == NULL)
		{
			*head = NULL;
		}
		else
		{
			_delete->next->prev = NULL;
			*head = _delete->next;
		}
		free(_delete);
		return (1);
	}
	while (index > 0 && _delete != NULL)
	{
		_delete = _delete->next;
		index--;
	}
	if (_delete == NULL)
		return (-1);

	if (_delete->next == NULL)
		_delete->prev->next = NULL;
	else
	{
		_delete->prev->next = _delete->next;
		_delete->next->prev = _delete->prev;
	}

	free(_delete);
	return (1);

}
