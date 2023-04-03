#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A listint_t list.
 * Retur: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}