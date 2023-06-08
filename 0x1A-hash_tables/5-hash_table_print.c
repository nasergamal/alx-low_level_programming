#include "hash_tables.h"

/**
 * hash_table_print - print hash table contents
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	int f = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (f)
				printf(", ");
			ptr = ht->array[i];
			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
			f = 1;
		}
	}
	printf("}\n");
}
