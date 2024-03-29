#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t
 *				linked list.
 * @head: The linked list.
 * @index: The index whose node is to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode, *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		nextnode = tmp;
	}
	else
	{
		while (i < index - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		nextnode = tmp->next;
		tmp->next = nextnode->next;
	}
	free(nextnode);
	return (1);
}
