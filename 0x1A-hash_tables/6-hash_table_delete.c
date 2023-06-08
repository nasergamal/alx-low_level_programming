#include "hash_tables.h"

/**
 * hash_table_delete - free hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL, *ptr2 = NULL;

	if (!ht)
		return;
	for (i = 0 ; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			while (ptr)
			{
				ptr2 = ptr;
				ptr = ptr->next;
				free(ptr2->key);
				free(ptr2->value);
				free(ptr2);
			}
		}
	}
	free(ht->array);
	free(ht);
}
