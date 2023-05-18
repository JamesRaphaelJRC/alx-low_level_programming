#include "lists.h"
#include "stdlib.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: The head pointer.
 * @idx: The index at which the new node will be inserted.
 * @n: An integer for initialization of the new node.
 *
 * Return: Address of the newnode on success and NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newnode;
	unsigned int node_len = 0, idx_count = 0;

	while (tmp)
	{
		node_len++;
		tmp = tmp->next;
	}
	tmp = *h;

	if (idx > node_len)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	while (idx_count < idx - 1)
	{
		tmp = tmp->next;
		idx_count++;
	}
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next = newnode;
	tmp->next->prev = newnode;

	return (newnode);
}
