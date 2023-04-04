#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @index: Index of the node to be returned.
 * @head: The linked list.
 *
 * Return: The nth node of the linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (count < index)
	{
		tmp = tmp->next;
		count++;
	}
	return (tmp);
}
