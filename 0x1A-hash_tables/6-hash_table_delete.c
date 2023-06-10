#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *newnode, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			newnode = ht->array[i];
			while (newnode != NULL)
			{
				tmp = newnode->next;
				free(newnode->key);
				free(newnode->value);
				free(newnode);
				newnode = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
