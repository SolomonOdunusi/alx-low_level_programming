#include "hash_tables.h"

/**
 * hash_table_get - the func retrieves a value associated with a key
 * @ht: hash table
 * @key: key to retrieve value
 * Return: returns value else NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}
	return (NULL);
}
