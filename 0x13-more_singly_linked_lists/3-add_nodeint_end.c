#include "lists.h"

/**
 * add_nodeint_end - function that adds node to the end of list
 * @head: checks first for head
 * @n: the elements in the list
 * Return: Pointer to the node with pointer to NULL
 * Return NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *existing;

	end_node = (listint_t *)malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		existing = *head;
		while (existing->next != NULL)
		{
			existing = existing->next;
		}
		existing->next = end_node;
	}
	return (end_node);
}
/**
 * add_nodeint_end - end_node will be added to the end of listint_t
 * existing is what will be used to traverse the list
 * we allocared memory using malloc
 * if memory allocation fails, NULL is returned
 * is list is empty (*head is NULL), the new node is head now
 * the pointer the the next code is assigned NULL
 * but if not empty, we iterates through the nodes of the list
 * till it reaches the node pointing to NULL
 * the loop ends and returns the pointer to the new node (end_node)
 */
