#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data(n) of a listint_t linked list.
 * @head: The linked list
 *
 * Return: The sum of all the data (n) in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
