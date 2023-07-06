#include "hash_tables.h"

/**
 * hash_table_set - adds an element to
 * the hash table
 * @ht: the hash table you want to add or
 * update the key/value to
 * @key: the key. key can not be an empty
 * string
 * @value: the value associated with the
 * key. value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Compute the index of the key in the hash table */
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	/* Check if there is a collision at the computed index */
	hash_node_t *node = ht->array[index];
	/* Create a new node for the key/value pair */
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	/* Check if the key is valid */
	if (!ht || !key || strlen(key) == 0)
		return (0);

	while (node)
	{
		/* If the key already exists in the hash table */
		/* update its value and return */
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	if (!new_node)
		return (0);

	/* Set the key and value of the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* Add the new node at the beginning of the list at the computed index */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
