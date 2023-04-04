#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t and returns the data(n)
 *			of the headnode.
 * @head: A pointer to the listint_t list.
 *
 * Return: The data(n) of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;

	free(tmp);

	return (data);
}
