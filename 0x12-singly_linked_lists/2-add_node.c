#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the begining of a list_t list.
 * @head: The list
 * @str: String to initialize the node.
 * Return: Address of the new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int str_len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;
	new->str = strdup(str);
	new->len = str_len;
	new->next = *head;

	*head = new;

	return (new);
}
