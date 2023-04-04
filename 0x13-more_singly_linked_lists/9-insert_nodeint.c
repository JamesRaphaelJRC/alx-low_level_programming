#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a node at a  give position.
 * @head: A listint_t pointer to the listint_t linked list.
 * @idx: The index at which the new node will be inserted.
 * @n: The data to initialize the newnode to be inserted.
 *
 * Return: A pointer to the newly inserted node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
	}
	else
	{
		for (node = 1; node < idx; node++)
		{
			if (tmp == NULL || tmp->next == NULL)
				return (NULL);

			tmp = tmp->next;
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
