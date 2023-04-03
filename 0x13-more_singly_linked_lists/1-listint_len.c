#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: The listint_t list.
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
