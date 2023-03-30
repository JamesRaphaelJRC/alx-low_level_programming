#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The linked list_t list.
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
