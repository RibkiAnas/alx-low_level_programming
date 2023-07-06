#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *next_node;

	/* Check if the hash table is valid */
	if (!ht)
		return;

	/* Iterate over each index in the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Iterate over each node in the linked list at the current index */
		node = ht->array[i];
		while (node)
		{
			/* Save a pointer to the next node */
			next_node = node->next;

			/* Free the key and value of the current node */
			free(node->key);
			free(node->value);

			/* Free the current node */
			free(node);

			/* Move to the next node */
			node = next_node;
		}
	}

	/* Free the array of the hash table */
	free(ht->array);

	/* Free the hash table */
	free(ht);
}
