#include "hash_tables.h"

/**
 * shash_table_create - create and setup memory for new sorted hash
 * @size: hash size
 *
 * Return: pointer to newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shash;

	shash = malloc(sizeof(shash_table_t));
	if (shash == NULL)
		return (NULL);
	shash->array = malloc(sizeof(shash_node_t *) * size);
	if (shash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		shash->array[i] = NULL;
	shash->size = size;
	shash->shead = shash->stail = NULL;
	return (shash);
}

void sorted(shash_table_t *ht, shash_node_t *node);
/**
 * shash_table_set - setup new key's node and add it to hash table (sorted)
 * @ht: hash table
 * @key: new node key
 * @value: new node value
 *
 * Return: 0 (success) or 1 (failure)
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node = NULL, *ptr = NULL;
	char *valuec;

	if (!ht || !key || !(*key) || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	valuec = strdup(value);
	if (valuec == NULL)
		return (0);
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{	free(valuec);
		return (0); }
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	node->value = valuec, strcpy(node->key, key);
	node->next = node->snext = node->sprev = NULL;
	ptr = ht->array[index];
	while (ptr)
	{
		if (!(strcmp(ptr->key, key)))
		{	free(ptr->value);
			free(node->key);
			free(node);
			ptr->value = valuec;
			return (1); }
		ptr = ptr->next; }
	node->next = ht->array[index];
	ht->array[index] = node;
	sorted(ht, node);
	return (1);
}

/**
 * sorted - add new node in a sorted manner
 * @ht: hash table
 * @node: new node
 *
 * Return: void
 */

void sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *ptr = NULL;

	ptr = ht->shead;
	if (!ptr)
		ht->shead = ht->stail = node;
	else
	{
		if (strcmp(ptr->key, node->key) > 0)
		{
			ptr->sprev = node;
			node->snext = ptr;
			ht->shead = node;
			return;
		}
		while (ptr->snext)
		{
			if (strcmp(ptr->snext->key, node->key) > 0)
			{
				ptr->snext->sprev = node;
				node->snext = ptr->snext;
				ptr->snext = node, node->sprev = ptr;
				return;
			}
			if (!ptr->snext)
				break;
			ptr = ptr->snext;
		}
		if (!ptr->snext)
		{       ptr->snext = node;
			node->sprev = ptr;
			ht->stail = node;
		}
	}
}

/**
 * shash_table_get - get the value for a certain key
 * @ht: hash table
 * @key: the key we are looking for
 *
 * Return: value of the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *ptr = NULL;

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

/**
 * shash_table_print - print hash table sorted contents
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr = NULL;
	int f = 0;

	if (!ht)
		return;
	printf("{");
	ptr = ht->shead;
	while (ptr)
	{
		if (f)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		f = 1;
		ptr = ptr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print hash table sorted contents in reverse
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr = NULL;
	int f = 0;

	if (!ht)
		return;
	printf("{");
	ptr = ht->stail;
	while (ptr)
	{
		if (f)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		f = 1;
		ptr = ptr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - free hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr = NULL, *ptr2 = NULL;

	if (!ht)
		return;
	ptr = ht->shead;
	while (ptr)
	{
		ptr2 = ptr;
		ptr = ptr->snext;
		free(ptr2->key);
		free(ptr2->value);
		free(ptr2);
	}
	free(ht->array);
	free(ht);
}
