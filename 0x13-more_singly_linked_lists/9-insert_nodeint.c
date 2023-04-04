#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a node at a  give position.
 * @head: A listint_t pointer to the listint_t linked list.
 * @idx: The index where node should be inserted.
 * @n: The data to initialize the newnode to be inserted.
 *
 * Return: A pointer to the newly inserted node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *newnode;
	unsigned int count = 0;

	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	if (idx > count)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	tmp = *head;
	count = 0;
	newnode->n = n;

	while (count < idx)
	{
		tmp = tmp->next;
		count++;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
