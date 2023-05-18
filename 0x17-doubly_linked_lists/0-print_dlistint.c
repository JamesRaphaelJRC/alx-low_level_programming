#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A head pointer to the dlistint list.
 *
 * Return: The number of nodes in the doubly linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
