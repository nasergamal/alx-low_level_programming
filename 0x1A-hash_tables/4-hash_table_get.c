#include "hash_tables.h"

/**
 * hash_table_get - get the value for a certain key
 * @ht: hash table
 * @key: the key we are looking for
 *
 * Return: value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr = NULL;

	if (!ht || !key || !(*key))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	ptr = ht->array[index];
	while (ptr)
	{
		if (!(strcmp(ptr->key, key)))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
