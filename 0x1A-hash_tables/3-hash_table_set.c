#include "hash_tables.h"

/**
 * hash_table_set - setup node for new key and insert it into hash table
 * @ht: hash table
 * @key: new node key
 * @value: new node value
 *
 * Return: 0 (success) or 1 (failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL, *ptr = NULL;

	if (!key || !(*key) || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	if (!ht->array[index])
	{
		ht->array[index] = node;
		return (1);
	}
	ptr = ht->array[index];
	while (ptr)
	{
		if (!(strcmp(ptr->key, key)))
		{
			free(ptr->value);
			free(node->key);
			ptr->value = node->value;
			free(node);
			return (1);
		}
		ptr = ptr->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

