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
	char *valuec;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	valuec = strdup(value);
	if (valuec == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(valuec);
		return (0); }
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	node->value = valuec;
	strcpy(node->key, key);
	node->next = NULL;

	ptr = ht->array[index];
	while (ptr)
	{
		if (!(strcmp(ptr->key, key)))
		{
			free(ptr->value);
			free(node->key);
			ptr->value = valuec;
			free(node);
			return (1); }
		ptr = ptr->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

