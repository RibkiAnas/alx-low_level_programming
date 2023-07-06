#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * You should print the key/value in the
 * order that they appear in the array of
 * hash table
 * Order: array, list
 * Format: see example
 * If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	/* Check if the hash table is valid */
	if (!ht)
		return;

	/* Print the opening brace */
	printf("{");

	/* Iterate over each index in the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Iterate over each node in the linked list at the current index */
		node = ht->array[i];
		while (node)
		{
			/* Print a comma before all elements except the first */
			if (!first)
			printf(", ");
			first = 0;

			/* Print the key/value pair */
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}

	/* Print the closing brace and a newline */
	printf("}\n");
}
