#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The listint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_num);
}
