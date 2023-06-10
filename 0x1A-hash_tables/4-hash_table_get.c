#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_newnode_t *newnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	newnode = ht->array[index];
	while (newnode && strcmp(newnode->key, key) != 0)
		newnode = newnode->next;

	return ((newnode == NULL) ? NULL : newnode->value);
}
