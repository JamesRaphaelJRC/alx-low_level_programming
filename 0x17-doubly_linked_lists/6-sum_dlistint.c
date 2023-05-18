#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) of a dlistint_t list.
 * @head: A pointer to the first node.
 *
 * Return: 0 if list is empty, sum of all data (n) otherwise.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
