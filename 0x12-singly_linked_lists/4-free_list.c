#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Write a function that frees a list_t list.
 * @head: top of node
 * Return: freed memory
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
}
