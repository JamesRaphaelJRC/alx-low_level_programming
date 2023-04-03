#include "lists.h"
#include <stdio.h>


/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The listint_t list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
