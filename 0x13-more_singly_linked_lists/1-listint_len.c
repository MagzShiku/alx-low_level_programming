#include "lists.h"

/**
 * listint_len - a function that reeturns number of ele in listsint_t
 * listint_t - a custon datatype that lists elements
 * here we shall eiterate through while loop just like @task 0
 * size_t used to count the size and count of objects in memory
 * @h: the pointer to where the list is
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements_prt;

	elements_prt = 0;

	while (h != NULL)
	{
		elements_prt++;
		h = h->next; /* to go to next node */
	}

	return (elements_prt);

}
