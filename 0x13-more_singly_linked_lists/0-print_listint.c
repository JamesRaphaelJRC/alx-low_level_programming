#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
