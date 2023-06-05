#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning of lst
 * @head: the head is the first adress in a node
 * @n: the adress of list of nodes in a link
 * Return: Adress of new elenemt
 * listint_t is not an inbuilt data type. 
 * It is customised and we have defined it in a typedef
 * NULL in case of fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = (listint_t *)malloc(sizeof(listint_t));

	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->next = *head;
	*head = new_element;

	return(new_element);

}
