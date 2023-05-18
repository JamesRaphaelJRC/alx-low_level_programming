#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a node to the end of the list.
 * @head: A pointer to the first node.
 * @n: An integer to be used to initialize the new node..
 *
 * Return: The address of the new node or Null if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	static dlistint_t *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = tail = newnode;
	}
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	return (newnode);
}
