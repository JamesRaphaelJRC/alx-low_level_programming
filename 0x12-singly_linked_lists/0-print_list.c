#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all the elemets of a list_t list.
 * @h: The list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	int node_num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
