#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the first node.
 * @index: The index whose node is to be returned.
 *
 * Return: The node at index 'index'.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tot_node = 0, node_count = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		tot_node++;
		tmp = tmp->next;
	}
	tmp = head;

	if (index >= tot_node)
		return (NULL);

	while (node_count < index)
	{
		tmp = tmp->next;
		node_count++;
	}
	return (tmp);
}
