#include "hash_tables.h"

#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created
 * hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->size = size;
	return (ht);
}
