#include "hash_tables.h"

/**
 * hash_table_create - create and setup memory for new hash
 * @size: hash size
 *
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	hash->size = size;
	return (hash);
}

