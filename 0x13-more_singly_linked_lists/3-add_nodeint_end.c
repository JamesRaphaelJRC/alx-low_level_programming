#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a newnode to the end of a listint_t list.
 * @head: The listint_t list.
 * @n: The value of n in the new listint_t list.
 * Return: The address of the new element or null if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
