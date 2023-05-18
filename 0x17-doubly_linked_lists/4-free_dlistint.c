#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t doubly linked list.
 * @head: A pointer to the first node.
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
