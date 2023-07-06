#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value
 * associated with a key
 * @ht: the hash table you want to look
 * into
 * @key: the key you are looking for
 * Return: the value associated with the
 * element, or NULL if key couldn’t be
 * found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check if the key is valid */
	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	/* Compute the index of the key in the hash table */
	index = key_index((const unsigned char *)key, ht->size);
	/* Check if there is a collision at the computed index */
	node = ht->array[index];
	while (node)
	{
		/* If the key exists in the hash table, return its value */
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	/* If the key does not exist in the hash table, return NULL */
	return (NULL);
}
