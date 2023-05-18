#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a node to the begining of a doubly linked list.
 * @head: A head pointer to the first node.
 * @n: An integer to be used to initialize the new node.
 *
 * Return: The address of the new element or null if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = tail = newnode;
	}
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
